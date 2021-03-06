/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSMutableString;

@interface CKMessageEncodingInfo : NSObject  {
    NSMutableString *_mutableText;
    BOOL _infoCalculated;
    int _characterCountNumerator;
    int _characterCountDenominator;
}

@property BOOL infoCalculated;
@property int characterCountNumerator;
@property int characterCountDenominator;


- (void)dealloc;
- (void)calculateInfo;
- (BOOL)infoCalculated;
- (void)setInfoCalculated:(BOOL)arg1;
- (void)setCharacterCountDenominator:(int)arg1;
- (void)setCharacterCountNumerator:(int)arg1;
- (void)_calculateInfoIfNecessary;
- (int)characterCountDenominator;
- (int)characterCountNumerator;
- (void)updateByReloadingFromComposition:(id)arg1 replacementRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (id)initWithContentsOfComposition:(id)arg1;

@end
