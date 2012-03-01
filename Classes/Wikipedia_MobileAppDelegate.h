//
//  Wikipedia_MobileAppDelegate.h
//  Wikipedia Mobile
//
//  Created by Andreas Lengyel on 2/3/10.
//  Copyright Wikimedia Foundation 2010. All rights reserved.
//
#import <AVFoundation/AVFoundation.h>

int abuseBatteryBug;

@interface Wikipedia_MobileAppDelegate : NSObject <UIApplicationDelegate> {
	NSManagedObjectModel *managedObjectModel;
    NSManagedObjectContext *managedObjectContext;	    
    NSPersistentStoreCoordinator *persistentStoreCoordinator;
	
    UIWindow *window;
    UINavigationController *navigationController;
	NSUserDefaults *settings;
    AVAudioPlayer *audioPlayer;
}

@property (nonatomic, retain, readonly) NSManagedObjectModel *managedObjectModel;
@property (nonatomic, retain, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, retain, readonly) NSPersistentStoreCoordinator *persistentStoreCoordinator;

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (nonatomic, retain) NSUserDefaults *settings;
@property (nonatomic, retain) AVAudioPlayer *audioPlayer;

- (NSString *)applicationDocumentsDirectory;

@end
