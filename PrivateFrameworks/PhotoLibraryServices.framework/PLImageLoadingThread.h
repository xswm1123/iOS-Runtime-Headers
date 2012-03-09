/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSMutableSet, PLPhotoLibrary, PLImageCache, NSMutableArray, NSMutableDictionary;

@interface PLImageLoadingThread : NSObject  {
    BOOL _running;
    BOOL _paused;
    BOOL _canceled;
    PLImageCache *_cache;
    NSMutableSet *_queues;
    NSMutableDictionary *_requestsByKey;
    struct dispatch_queue_s { } *_isolation;
    struct dispatch_queue_s { } *_workQueue;
    struct dispatch_queue_s { } *_highestPriorityQueue;
    NSMutableArray *_highestPriorityRequests;
    struct dispatch_queue_s { } *_highPriorityQueue;
    NSMutableArray *_highPriorityRequests;
    struct dispatch_queue_s { } *_normalPriorityQueue;
    NSMutableArray *_normalPriorityRequests;
    PLPhotoLibrary *_library;
}


- (void)dealloc;
- (void)_serviceRequest:(id)arg1;
- (void)_serviceRequestFrom:(id)arg1;
- (void)_start;
- (void)_requeueRequest:(id)arg1 oldPriority:(int)arg2;
- (BOOL)_dequeueRequest:(id)arg1;
- (void)cancelLoadFromSource:(id)arg1 asset:(id)arg2 imageLoadingQueue:(id)arg3;
- (void)removeImageLoadingQueue:(id)arg1;
- (void)addImageLoadingQueue:(id)arg1;
- (id)loadImageFromSource:(id)arg1 asset:(id)arg2 forImageLoadingQueue:(id)arg3 synchronously:(BOOL)arg4 priority:(int)arg5 completion:(id)arg6;
- (void)cacheWasDeallocated;
- (id)initWithImageCache:(id)arg1;
- (void)_enqueueRequest:(id)arg1;
- (void)resume;
- (void)pause;
- (void)stop;

@end