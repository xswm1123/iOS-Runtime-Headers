/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDiskSpaceReclaimer : NSObject {
    BOOL _isClosed;
    NSObject<OS_dispatch_queue> *_queue;
    BRCAccountSession *_session;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (void)_enumerateItemsForEvictSyncWithBlock:(id /* block */)arg1 withUrgency:(int)arg2;
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;
- (void)close;
- (long long)computePurgableSpaceWithUrgency:(int)arg1;
- (id)descriptionForItem:(id)arg1 context:(id)arg2;
- (void)didAccessDocument:(id)arg1;
- (BOOL)documentChangedEvictability:(id)arg1;
- (BOOL)documentWasAccessed:(id)arg1;
- (BOOL)documentWasCreated:(id)arg1;
- (BOOL)documentWasDeleted:(id)arg1;
- (id)initWithAccountSession:(id)arg1;
- (long long)periodicReclaimSpace:(long long)arg1 withUrgency:(int)arg2;
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;
- (id)queue;
- (BOOL)renameAndUnlinkInBackgroundItemAtPath:(id)arg1;
- (void)unlinkInBackgroundItemsRenamedBeforeRestart;

@end
