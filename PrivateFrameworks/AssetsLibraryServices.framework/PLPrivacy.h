/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@interface PLPrivacy : NSObject {
    int _authStatus;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

+ (void)disableForceOverrideTCC;
+ (void)enableForceOverrideTCC;
+ (id)sharedInstance;

- (BOOL)_isPhotosAccessAllowedWithScope:(int)arg1 forceHandler:(BOOL)arg2 accessAllowedHandler:(id /* block */)arg3;
- (void)dealloc;
- (id)init;
- (BOOL)isPhotoLibraryReadAccessAllowed;
- (BOOL)isPhotoLibrarySharingOrModificationAllowed;
- (BOOL)isPhotosAccessAllowedPromptIfNeededWithHandler:(id /* block */)arg1;
- (void)isPhotosAccessAllowedWithScope:(int)arg1 handler:(id /* block */)arg2;
- (BOOL)isPhotosAccessAllowedWithScope:(int)arg1 promptIfNeededWithHandler:(id /* block */)arg2;
- (BOOL)isPhotosTCCAccessAllowed;
- (BOOL)isPhotosTCCAccessNotAllowed;
- (BOOL)isPhotosTCCAccessRestricted;
- (void)photoAccessPowersActive;
- (int)photosTCCAccessStatus;

@end
