/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class <NSISVariableDelegate>;

@interface NSISVariable : NSObject  {
    int _refCount;
    <NSISVariableDelegate> *_delegate;
}

@property <NSISVariableDelegate> * delegate;
@property(readonly) BOOL shouldBeMinimized;
@property(readonly) int valueRestriction;

+ (id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;
+ (id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3;

- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)description;
- (unsigned int)retainCount;
- (id)retain;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)shouldBeMinimized;
- (BOOL)valueIsUserVisible;
- (float)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
- (BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
- (id)markedConstraint;
- (int)valueRestriction;
- (BOOL)shouldBeIntegral;

@end
