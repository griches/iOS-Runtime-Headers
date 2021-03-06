/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADDrawable, WDCharacterProperties;

@interface WDOfficeArt : WDRun  {
    WDCharacterProperties *mProperties;
    OADDrawable *mDrawable;
    boolmFloating;
}

+ (int)textBoxTextTypeForRegularTextType:(int)arg1;

- (void)setProperties:(id)arg1;
- (void)dealloc;
- (id)properties;
- (void)setFloating:(bool)arg1;
- (void)propagateTextTypeToDrawables;
- (id)imageName;
- (id)imageData;
- (void)setImageBlipRef:(id)arg1;
- (id)imageBlipRef;
- (void)clearDrawable;
- (id)overrideDrawable;
- (void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2;
- (void)clearProperties;
- (id)initWithParagraph:(id)arg1;
- (void)checkForFloating:(id)arg1;
- (void)setDrawable:(id)arg1;
- (int)runType;
- (bool)isFloating;
- (id)drawable;
- (BOOL)isDrawableOverridden;

@end
