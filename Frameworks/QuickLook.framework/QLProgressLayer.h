/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class QLDisplayBundle, UIActivityIndicatorView, UILabel;

@interface QLProgressLayer : UIImageView {
    QLDisplayBundle *_displayBundle;
    UILabel *_loadingText;
    UIActivityIndicatorView *_progressIndicator;
}

- (void)dealloc;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithDisplayBundle:(id)arg1;
- (void)layoutSubviews;

@end