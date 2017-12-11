//
//  SHPAppDelegate.h
//  Shopper
//
//  Created by andrea sponziello on 24/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <UserNotifications/UserNotifications.h>

@class SHPApplicationContext;
@class MBProgressHUD;

@interface SHPAppDelegate : UIResponder <UIApplicationDelegate, CLLocationManagerDelegate, UITabBarControllerDelegate, UNUserNotificationCenterDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) SHPApplicationContext *applicationContext;
@property (assign, nonatomic) BOOL registeredToAPN;
@property (strong, nonatomic) NSString *deviceToken;
@property(nonatomic, strong) MBProgressHUD *hud;

-(void)startPushNotifications;
//-(void)saveParseInstallationWithUsername:(NSString *)username deviceToken:(NSData *)deviceToken;
-(void)downloadLoggedUserData;

@end