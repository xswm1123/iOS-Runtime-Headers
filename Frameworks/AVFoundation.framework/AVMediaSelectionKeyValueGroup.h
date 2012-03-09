/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, AVMediaSelectionOption, NSDictionary, AVAsset;

@interface AVMediaSelectionKeyValueGroup : AVMediaSelectionGroup  {
    AVAsset *_asset;
    NSDictionary *_dictionary;
    NSArray *_options;
    AVMediaSelectionOption *_defaultOption;
}


- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)dealloc;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)_defaultOption;
- (id)_optionWithID:(id)arg1;
- (BOOL)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (BOOL)_isKeyValueGroup;
- (id)_groupID;
- (BOOL)allowsEmptySelection;
- (id)_mediaType;
- (id)asset;
- (id)options;
- (id)dictionary;

@end