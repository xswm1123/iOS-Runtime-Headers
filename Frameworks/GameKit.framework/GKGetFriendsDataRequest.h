/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray;



@interface GKGetFriendsDataRequest : GKGetFriendListDataRequest 
{
    NSArray *_rids;
}

@property(retain) NSArray *rids;


- (void)setRids:(id)arg1;
- (id)rids;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;
- (id)key;
- (void)dealloc;

@end