/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADStroke;

@interface OADTableCellBorderStyle : NSObject  {
    OADStroke *mLeftStroke;
    OADStroke *mRightStroke;
    OADStroke *mTopStroke;
    OADStroke *mBottomStroke;
    OADStroke *mHorzInsideStroke;
    OADStroke *mVertInsideStroke;
    OADStroke *mTopLeftToBottomRightStroke;
    OADStroke *mBottomLeftToTopRightStroke;
}

+ (id)defaultStyle;
+ (id)defaultObliqueStroke;
+ (id)defaultAxisParallelStroke;

- (void)dealloc;
- (void)applyOverridesFrom:(id)arg1;
- (void)setVertInsideStroke:(id)arg1;
- (void)setHorzInsideStroke:(id)arg1;
- (void)setBottomLeftToTopRightStroke:(id)arg1;
- (void)setTopLeftToBottomRightStroke:(id)arg1;
- (id)stroke:(int)arg1;
- (id)bottomLeftToTopRightStroke;
- (id)topLeftToBottomRightStroke;
- (void)setBottomStroke:(id)arg1;
- (void)setTopStroke:(id)arg1;
- (void)setRightStroke:(id)arg1;
- (void)setLeftStroke:(id)arg1;
- (id)shallowCopy;
- (id)rightStroke;
- (id)vertInsideStroke;
- (id)leftStroke;
- (id)bottomStroke;
- (id)horzInsideStroke;
- (id)topStroke;

@end
