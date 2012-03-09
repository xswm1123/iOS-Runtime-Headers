/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GMMRequester;

@interface GMMGEOSearchProvider : GEOSearchProvider <PBRequesterDelegate> {
    GMMRequester *_requester;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _finished;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _spellingSuggestion;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _refinement;

}

+ (id)hostname;
+ (unsigned short)provider;

- (void)cancel;
- (id)init;
- (void)dealloc;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)search:(id)arg1 finished:(id)arg2 spellingSuggestion:(id)arg3 refinement:(id)arg4 error:(id)arg5;

@end