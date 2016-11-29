//
//  AppDelegate.h
//  DemoJenkins
//
//  Created by iBoss on 29/11/16.
//  Copyright © 2016 iBoss. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

