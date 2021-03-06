/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDWPContainerHint, GQDSStyle, GQWrapPointSet, GQHStyle;

@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
    struct __CFDictionary { } *mFloatingDrawables;
    int mMode;
    struct __CFDictionary { } *mHeaders;
    struct __CFDictionary { } *mFooters;
    struct __CFArray { } *mSectionStyles;
    struct __CFDictionary { } *mPageWrapPointsMap;
    int mCurrentPageIndex;
    int mStartPageAt;
    int mStartPageAtValueChangedAtPageIndex;
    GQHStyle *mCurrentLayoutStyle;
    GQHStyle *mCurrentParagraphStyle;
    GQDSStyle *mCurrentBaseParagraphStyle;
    struct __CFString { } *mCurrentCachedParagraphClass;
    GQHStyle *mCurrentSpanStyle;
    GQDSStyle *mCurrentBaseSpanStyle;
    struct __CFString { } *mCurrentCachedSpanClass;
    GQWrapPointSet *mCurrentWrapPointSet;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } mLastFrame;
    BOOL mMappingFloatingDrawables;
    BOOL mStartedPage;
    BOOL mStartedSection;
    BOOL mDidInsertPageHeader;
    BOOL mDidFindContainerHint;
    GQDWPContainerHint *mLastInsertedContainerHint;
    struct __CFArray { } *mAttachmentPositions;
    long mAttachmentIdCounter;
    long mFirstAttachmentId;
    BOOL mSplitNextAttachment;
    GQDSStyle *mCurrentSectionStyle;
    BOOL mHasLayoutDrawables;
    int mCurrentHintPageIndex;
    int mCurrentHintColumnIndex;
    BOOL mIsMappingHeadersFooters;
    int mHeaderFooterPageNumber;
    struct __CFDictionary { } *mDrawablePagesOrderToCssZOrderClassMap;
    struct CGSize { 
        float width; 
        float height; 
    } mPageSize;
    struct __CFArray { } *mTocHrefStack;
    BOOL mCurrentFrameHasSandbagFloats;
    int mProgressiveIndex;
}


- (id).cxx_construct;
- (void)dealloc;
- (void)setCurrentPageIndex:(int)arg1;
- (int)currentPageIndex;
- (int)mode;
- (void)setMode:(int)arg1;
- (void)openStateLayoutElementsAndStyles;
- (BOOL)needAbsolutelyPositionedTables;
- (void)setOutlineStyleType:(int)arg1;
- (int)pageNumberForHeaderOrFooter;
- (BOOL)hasLayoutDrawables;
- (void)setHasLayoutDrawables:(BOOL)arg1;
- (void)insertAttachmentPlaceholder;
- (long)firstAttachmentId;
- (double)moveToNextAttachmentPosition;
- (void)finishedWithSplitAttachment;
- (bool)splitNextAttachment;
- (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString { }*)arg3;
- (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString { }*)arg3;
- (void)clearFloatingDrawables;
- (unsigned int)tocDepth;
- (struct __CFString { }*)cssZOrderClassForDrawablePagesOrder:(int)arg1;
- (void)startSection;
- (BOOL)isMappingHeadersFooters;
- (id)wrapPointSetForPage:(int)arg1;
- (struct { int x1; int x2; })rangeForSectionStyleAtPageIndex:(int)arg1;
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;
- (id)sectionStyleForPageIndex:(int)arg1;
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned int)arg1;
- (void)closeStateLayoutElementsAndStyles;
- (void)startLayout;
- (void)addAttachmentPosition:(double)arg1;
- (long)nextAttachmentId;
- (double)currentAttachmentPosition;
- (struct __CFArray { }*)pageDrawables:(int)arg1;
- (void)endWrapPointSet;
- (void)addFloatingDrawable:(id)arg1;
- (void)beginWrapPointSet;
- (struct __CFDictionary { }*)pagesOrderToCssZOrderClassMapDictionary;
- (id)footerForName:(struct __CFString { }*)arg1;
- (id)headerForName:(struct __CFString { }*)arg1;
- (void)setIsMappingHeadersFooters:(BOOL)arg1;
- (void)resolveHeaderName:(const struct __CFString {}**)arg1 footerName:(const struct __CFString {}**)arg2;
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;
- (void)setFooters:(struct __CFArray { }*)arg1;
- (void)setPageSize:(struct CGSize { float x1; float x2; })arg1;
- (long)currentAttachmentId;
- (int)floatingDrawablesCount;
- (void)endSection;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)allowInlineWrap;
- (struct __CFString { }*)cssZOrderClassForDrawable:(id)arg1;
- (void)handleContainerHint:(id)arg1;
- (void)setDidFindContainerHint:(BOOL)arg1;
- (void)setCurrentLayoutStyle:(id)arg1;
- (void)overrideSectionStyle:(id)arg1;
- (void)setDidInsertPageHeader:(BOOL)arg1;
- (void)popTocHref;
- (void)pushTocHref:(struct __CFString { }*)arg1;
- (BOOL)useOutline;
- (void)clearWrapPoints;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Vector_impl { struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_1; struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_2; struct ObjcSharedPtr<GQDWrapPoint> {} *x_1_1_3; } x1; }*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (void)addWrapPoint:(id)arg1;
- (const struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Rb_tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::_Identity<GQUtility::ObjcSharedPtr<GQDWrapPoint>>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint>> > { struct _Rb_tree_impl<GQUtility::NSObjectComparator<GQDWrapPoint>, false> { struct NSObjectComparator<GQDWrapPoint> { SEL x_1_3_1; } x_1_2_1; struct _Rb_tree_node_base { int x_2_3_1; struct _Rb_tree_node_base {} *x_2_3_2; struct _Rb_tree_node_base {} *x_2_3_3; struct _Rb_tree_node_base {} *x_2_3_4; } x_1_2_2; unsigned int x_1_2_3; } x_1_1_1; } x1; }*)wrapPoints;
- (void)setHeaders:(struct __CFArray { }*)arg1;
- (void)setOutlineLevel:(int)arg1;
- (struct CGSize { float x1; float x2; })pageSize;
- (id)drawableAtIndex:(int)arg1;
- (void)inContent;

@end
