/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMSystemMonitor : NSObject {
    BOOL _active;
    BOOL _backingUp;
    int _dataProtectionState;
    NSDate *_dateScreenLightLastChanged;
    NSDate *_dateSystemLockLastChanged;
    double _delayTime;
    NSMutableArray *_earlyListeners;
    BOOL _idleOverride;
    NSDate *_idleStart;
    BOOL _inBackground;
    NSMutableArray *_listeners;
    BOOL _receivesMemoryWarnings;
    BOOL _screenLit;
    BOOL _screenLocked;
    BOOL _screensaverActive;
    BOOL _switchedOut;
    BOOL _systemLocked;
    NSTimer *_timer;
    BOOL _underFirstLock;
    NSString *_userID;
    int _userIdleToken;
    BOOL _usesPowerNotifications;
    BOOL _usesSystemIdleState;
    BOOL _watchesDataProtectionLockState;
    BOOL _watchesScreenLightState;
    BOOL _watchesSystemLockState;
    BOOL _willSleep;
}

@property (nonatomic) int _dataProtectionState;
@property (nonatomic) double _delayTime;
@property (nonatomic, retain) NSMutableArray *_earlyListeners;
@property (nonatomic) BOOL _idleOverride;
@property (nonatomic, retain) NSDate *_idleStart;
@property (nonatomic, retain) NSMutableArray *_listeners;
@property (nonatomic, retain) NSTimer *_timer;
@property (nonatomic) BOOL _underFirstLock;
@property (nonatomic, retain) NSString *_userID;
@property (nonatomic, readonly, retain) NSDate *dateScreenLightLastChanged;
@property (nonatomic, readonly, retain) NSDate *dateSystemLockLastChanged;
@property (setter=setActive:, nonatomic) BOOL isActive;
@property (nonatomic, readonly) BOOL isBackingUp;
@property (nonatomic) BOOL isFastUserSwitched;
@property (nonatomic, readonly) BOOL isInBackground;
@property (nonatomic, readonly) BOOL isScreenLit;
@property (nonatomic, readonly) BOOL isScreenLocked;
@property (nonatomic, readonly) BOOL isScreenSaverActive;
@property (nonatomic, readonly) BOOL isSetup;
@property (nonatomic, readonly) BOOL isSystemIdle;
@property (nonatomic, readonly) BOOL isSystemLocked;
@property (nonatomic, readonly) BOOL isUnderDataProtectionLock;
@property (nonatomic, readonly) BOOL isUnderFirstDataProtectionLock;
@property (nonatomic) BOOL receivesMemoryWarnings;
@property (nonatomic, readonly) double systemIdleTime;
@property (nonatomic, readonly) BOOL systemIsShuttingDown;
@property (nonatomic, readonly) BOOL systemIsSleeping;
@property (nonatomic) int userIdleToken;
@property (nonatomic) BOOL usesPowerNotifications;
@property (nonatomic) BOOL usesSystemIdleState;
@property (nonatomic) BOOL watchesDataProtectionLockState;
@property (nonatomic) BOOL watchesScreenLightState;
@property (nonatomic) BOOL watchesSystemLockState;

+ (id)sharedInstance;

- (void)_addEarlyListener:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationDidRemoveDeactivationReason:(id)arg1;
- (void)_applicationWillAddDeactivationReason:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_armIdleTimer;
- (void)_checkIdleTime:(id)arg1;
- (void)_checkRestoredFromBackup;
- (void)_clearIdleTimer;
- (int)_dataProtectionState;
- (double)_delayTime;
- (void)_deliverNotificationSelector:(SEL)arg1;
- (id)_earlyListeners;
- (void)_forceResumed;
- (void)_forceSuspended;
- (void)_handleLoginWindowNotification:(id)arg1;
- (BOOL)_idleOverride;
- (id)_idleStart;
- (id)_listeners;
- (void)_notificationCenterDidDisappear:(id)arg1;
- (void)_notificationCenterWillAppear:(id)arg1;
- (void)_overrideAndDisableIdleTimer:(BOOL)arg1;
- (void)_postScreenLocked;
- (void)_postScreenSaverStarted;
- (void)_receivedMemoryNotification;
- (void)_registerForLoginWindowNotifications;
- (void)_registerForRestoreNotifications;
- (void)_removeEarlyListener:(id)arg1;
- (void)_restoreDidStart;
- (void)_restoreDidStop;
- (void)_resume:(id)arg1;
- (void)_resumeEventsOnly:(id)arg1;
- (void)_screenLocked:(id)arg1;
- (void)_screenSaverStarted:(id)arg1;
- (void)_screenSaverStopped:(id)arg1;
- (void)_screenUnlocked:(id)arg1;
- (void)_setDataProtectionLockState:(int)arg1;
- (void)_setIdleState:(BOOL)arg1;
- (void)_setSystemLockState:(BOOL)arg1;
- (void)_setSystemScreenState:(BOOL)arg1;
- (void)_setupStateChanged;
- (void)_suspend:(id)arg1;
- (void)_suspendEventsOnly:(id)arg1;
- (void)_systemDidWake;
- (void)_systemWillShutdown;
- (void)_systemWillSleep;
- (id)_timer;
- (BOOL)_underFirstLock;
- (void)_unregisterForLoginWindowNotifications;
- (void)_unregisterForRestoreNotifications;
- (void)_updateIdleState;
- (id)_userID;
- (void)addListener:(id)arg1;
- (id)dateScreenLightLastChanged;
- (id)dateSystemLockLastChanged;
- (void)dealloc;
- (id)init;
- (BOOL)isActive;
- (BOOL)isBackingUp;
- (BOOL)isFastUserSwitched;
- (BOOL)isInBackground;
- (BOOL)isScreenLit;
- (BOOL)isScreenLocked;
- (BOOL)isScreenSaverActive;
- (BOOL)isSetup;
- (BOOL)isSystemIdle;
- (BOOL)isSystemLocked;
- (BOOL)isUnderDataProtectionLock;
- (BOOL)isUnderFirstDataProtectionLock;
- (BOOL)receivesMemoryWarnings;
- (void)removeListener:(id)arg1;
- (void)setActive:(BOOL)arg1;
- (void)setIsFastUserSwitched:(BOOL)arg1;
- (void)setReceivesMemoryWarnings:(BOOL)arg1;
- (void)setUserIdleToken:(int)arg1;
- (void)setUsesPowerNotifications:(BOOL)arg1;
- (void)setUsesSystemIdleState:(BOOL)arg1;
- (void)setWatchesDataProtectionLockState:(BOOL)arg1;
- (void)setWatchesScreenLightState:(BOOL)arg1;
- (void)setWatchesSystemLockState:(BOOL)arg1;
- (void)set_dataProtectionState:(int)arg1;
- (void)set_delayTime:(double)arg1;
- (void)set_earlyListeners:(id)arg1;
- (void)set_idleOverride:(BOOL)arg1;
- (void)set_idleStart:(id)arg1;
- (void)set_listeners:(id)arg1;
- (void)set_timer:(id)arg1;
- (void)set_underFirstLock:(BOOL)arg1;
- (void)set_userID:(id)arg1;
- (double)systemIdleTime;
- (BOOL)systemIsShuttingDown;
- (BOOL)systemIsSleeping;
- (int)userIdleToken;
- (BOOL)usesPowerNotifications;
- (BOOL)usesSystemIdleState;
- (BOOL)watchesDataProtectionLockState;
- (BOOL)watchesScreenLightState;
- (BOOL)watchesSystemLockState;

@end
