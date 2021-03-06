/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSPinyinString : NSString  {
    NSString *_string;
    unsigned int _syllableCount;
    unsigned int _score;
    unsigned int _rangeCount;
    unsigned int _replacementCount;
    unsigned int _transpositionCount;
    unsigned int _insertionCount;
    unsigned int _deletionCount;
    unsigned int _firstModificationIndex;
    struct _NSRange { unsigned int x1; unsigned int x2; } *_ranges;
    BOOL _lastSyllableIsPartial;
}

+ (id)prefixesForInputString:(id)arg1;
+ (id)alternativesForInputString:(id)arg1;
+ (id)_prefixesForInputString:(id)arg1;
+ (id)_alternativesForInputString:(id)arg1;

- (unsigned int)score;
- (id)description;
- (unsigned int)hash;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)string;
- (void)dealloc;
- (unsigned int)length;
- (Class)classForCoder;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 replacementCount:(unsigned int)arg5 transpositionCount:(unsigned int)arg6 insertionCount:(unsigned int)arg7 deletionCount:(unsigned int)arg8 rangeCount:(unsigned int)arg9 ranges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg10;
- (id)nonPinyinIndexSet;
- (struct _NSRange { unsigned int x1; unsigned int x2; })nonPinyinRangeAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfFirstModification;
- (unsigned int)numberOfDeletions;
- (unsigned int)numberOfInsertions;
- (unsigned int)numberOfTranspositions;
- (unsigned int)numberOfReplacements;
- (unsigned int)numberOfNonPinyinRanges;
- (BOOL)lastSyllableIsPartial;
- (unsigned int)syllableCount;
- (id)initWithString:(id)arg1 syllableCount:(unsigned int)arg2 lastSyllableIsPartial:(BOOL)arg3 score:(unsigned int)arg4 replacementCount:(unsigned int)arg5 transpositionCount:(unsigned int)arg6 insertionCount:(unsigned int)arg7 deletionCount:(unsigned int)arg8 indexOfFirstModification:(unsigned int)arg9 rangeCount:(unsigned int)arg10 ranges:(struct _NSRange { unsigned int x1; unsigned int x2; }*)arg11;

@end
