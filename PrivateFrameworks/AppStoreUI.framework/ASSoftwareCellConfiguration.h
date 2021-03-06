/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@interface ASSoftwareCellConfiguration : ASIconCellConfiguration  {
}

+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (void)reloadLayoutInformation;
- (void)reloadStrings;
- (void)reloadImages;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForAccessoryViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)alphaForLabelAtIndex:(unsigned int)arg1 fromAlpha:(float*)arg2 withModifiers:(unsigned int)arg3;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (BOOL)getShadowColor:(id*)arg1 offset:(struct CGSize { float x1; float x2; }*)arg2 forLabelAtIndex:(unsigned int)arg3 withModifiers:(unsigned int)arg4;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)init;

@end
