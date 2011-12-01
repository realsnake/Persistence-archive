//
//  ViewController.h
//  Persistence
//
//  Created by snake on 11-12-1.
//  Copyright (c) 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

#define kFileName @"data.plist"
#define kFileName @"archive"
#define kDataKey  @"Data"

@interface ViewController : UIViewController
@property (retain, nonatomic) IBOutlet UITextField *field1;
@property (retain, nonatomic) IBOutlet UITextField *field2;
@property (retain, nonatomic) IBOutlet UITextField *field3;
@property (retain, nonatomic) IBOutlet UITextField *field4;

- (NSString *)dataFilePath;
- (void)applicationWillResignActive:(NSNotification *)notification;
@end
