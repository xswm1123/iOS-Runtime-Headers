/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PSIQuery : NSObject {
    BOOL _didStart;
    PSIDatabase *_idx;
    BOOL _isCanceled;
    int _queryId;
    NSString *_searchText;
    NSObject<OS_dispatch_queue> *_syncQueue;
}

@property (getter=isCanceled, readonly) BOOL canceled;
@property (nonatomic, readonly) int queryId;
@property (nonatomic, readonly, copy) NSString *searchText;

- (void)cancel;
- (void)dealloc;
- (id)initWithQueryId:(int)arg1 index:(id)arg2 searchText:(id)arg3;
- (BOOL)isCanceled;
- (int)queryId;
- (void)runWithResultsHandler:(id /* block */)arg1;
- (id)searchText;

@end
