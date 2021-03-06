/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface EDPivotDataField : NSObject  {
    int mBaseField;
    unsigned int mBaseItem;
    unsigned int mFieldId;
    unsigned int mNumFmtId;
    NSString *mName;
    int mFormat;
}

+ (id)pivotDataField;

- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;
- (id)init;
- (void)setShowDataAs:(int)arg1;
- (int)showDataAs;
- (void)setFieldId:(unsigned int)arg1;
- (unsigned int)fieldId;
- (void)setBaseItem:(unsigned int)arg1;
- (unsigned int)baseItem;
- (void)setBaseField:(int)arg1;
- (int)baseField;
- (void)setNumFmtId:(unsigned int)arg1;
- (unsigned int)numFmtId;

@end
