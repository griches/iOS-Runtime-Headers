/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class NSMutableArray;

@interface VKLabelDrawStyle : NSObject <_VKStyle> {
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } visibility;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } shieldVisibility;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } heightSmall;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } heightMedium;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } heightLarge;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } hasHeightCurveSmall;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } hasHeightCurveMedium;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } hasHeightCurveLarge;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } fontExpansionSmall;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } fontExpansionMedium;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } fontExpansionLarge;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } color;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } haloColor;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } haloSizeSmall;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } haloSizeMedium;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } haloSizeLarge;
    struct VKProfileSparseRamp<unsigned int> { 
        union { 
            struct VKProfileSparseRampValue { 
                unsigned int value; 
                unsigned char hi; 
            } v[2]; 
            unsigned int *extra; 
        } u; 
        unsigned char count; 
    } lineWrapping;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } upcase;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } raisedInitial;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } smallCaps;
    struct VKProfileSparseRamp<int> { 
        union { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    } zIndices;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } roadRank;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } shieldRank;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } arrowVisible;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } arrowHeightSmall;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } arrowHeightMedium;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } arrowHeightLarge;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } arrowSpacing;
    struct VKProfileSparseRamp<VKLabelTextVisibility> { 
        union { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    } textVisibility;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } onlyShowIfTappable;
    struct VKProfileSparseRamp<signed char> { 
        union { 
            struct VKProfileSparseRampValue { 
                BOOL value; 
                unsigned char hi; 
            } v[2]; 
            char *extra; 
        } u; 
        unsigned char count; 
    } yieldsToOnscreenLabels;
    unsigned char dedupeRank;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } spacingSmall;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } spacingMedium;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } spacingLarge;
    struct VKProfileSparseRamp<int> { 
        union { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    } iconStyle;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } iconBadgeColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } iconGradientTopColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } iconGradientBottomColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } iconGlyphColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } iconHaloColor;
    struct VKProfileSparseRamp<VKGenericShieldStyle> { 
        union { 
            struct VKProfileSparseRampValue { 
                int value; 
                unsigned char hi; 
            } v[2]; 
            int *extra; 
        } u; 
        unsigned char count; 
    } genericShieldStyle;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } genericShieldBackgroundColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } genericShieldBorderColor;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } genericShieldTextColor;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } genericShieldHaloSize;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } genericShieldHaloColor;
    struct VKProfileSparseRamp<CGSize> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct CGSize { 
                    float width; 
                    float height; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct CGSize {} *extra; 
        } u; 
        unsigned char count; 
    } genericShieldDropShadowOffset;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } genericShieldDropShadowSize;
    struct VKProfileSparseRamp<_VGLColor> { 
        union { 
            struct VKProfileSparseRampValue { 
                struct _VGLColor { 
                    float r; 
                    float g; 
                    float b; 
                    float a; 
                } value; 
                unsigned char hi; 
            } v[2]; 
            struct _VGLColor {} *extra; 
        } u; 
        unsigned char count; 
    } genericShieldDropShadowColor;
    struct VKProfileSparseRamp<float> { 
        union { 
            struct VKProfileSparseRampValue { 
                float value; 
                unsigned char hi; 
            } v[2]; 
            float *extra; 
        } u; 
        unsigned char count; 
    } roadWidth;
    NSMutableArray *fontFamily;
    NSMutableArray *icon;
    float tiltLimit;
}


- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (BOOL)areShieldsEverVisible;
- (BOOL)visibleAtMaxZoom:(float)arg1;
- (BOOL)arrowVisibleAtZoom:(float)arg1;
- (double)minimumRoadArrowSpacingForZoom:(int)arg1;
- (double)minimumRoadLabelSpacingForZoom:(int)arg1 scaleFactor:(int)arg2;
- (double)mapWidthInEmsForZoom:(int)arg1 scaleFactor:(int)arg2;
- (void)getLabelTextGlyphStyle:(struct { float x1; BOOL x2; BOOL x3; id x4; }*)arg1 atZoom:(int)arg2 scaleFactor:(int)arg3;
- (void)getLabelStyle:(struct { BOOL x1; float x2; float x3; float x4; unsigned int x5; float x6; BOOL x7; BOOL x8; BOOL x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct _VGLColor { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; } x11; unsigned int x12; float x13; id x14; id x15; struct { int x_16_1_1; struct _VGLColor { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_16_1_2; struct _VGLColor { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_16_1_3[2]; struct _VGLColor { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_16_1_4; struct _VGLColor { float x_5_2_1; float x_5_2_2; float x_5_2_3; float x_5_2_4; } x_16_1_5; } x16; BOOL x17; float x18; float x19; int x20; BOOL x21; BOOL x22; }*)arg1 atZoom:(float)arg2 tilt:(float)arg3 contentScale:(float)arg4 scaleFactor:(int)arg5;
- (void)getRoadSignStyle:(struct { BOOL x1; float x2; float x3; float x4; unsigned int x5; float x6; BOOL x7; BOOL x8; BOOL x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct _VGLColor { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; } x11; unsigned int x12; float x13; id x14; id x15; struct { int x_16_1_1; struct _VGLColor { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_16_1_2; struct _VGLColor { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_16_1_3[2]; struct _VGLColor { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_16_1_4; struct _VGLColor { float x_5_2_1; float x_5_2_2; float x_5_2_3; float x_5_2_4; } x_16_1_5; } x16; BOOL x17; float x18; float x19; int x20; BOOL x21; BOOL x22; }*)arg1 atZoom:(float)arg2 tilt:(float)arg3 contentScale:(float)arg4 scaleFactor:(int)arg5;
- (void)getNavShieldStyle:(struct { BOOL x1; float x2; float x3; float x4; unsigned int x5; float x6; BOOL x7; BOOL x8; BOOL x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct _VGLColor { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; } x11; unsigned int x12; float x13; id x14; id x15; struct { int x_16_1_1; struct _VGLColor { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_16_1_2; struct _VGLColor { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_16_1_3[2]; struct _VGLColor { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_16_1_4; struct _VGLColor { float x_5_2_1; float x_5_2_2; float x_5_2_3; float x_5_2_4; } x_16_1_5; } x16; BOOL x17; float x18; float x19; int x20; BOOL x21; BOOL x22; }*)arg1 atZoom:(float)arg2 tilt:(float)arg3 contentScale:(float)arg4 scaleFactor:(int)arg5;
- (void)getShieldStyle:(struct { BOOL x1; float x2; float x3; float x4; unsigned int x5; float x6; BOOL x7; BOOL x8; BOOL x9; struct _VGLColor { float x_10_1_1; float x_10_1_2; float x_10_1_3; float x_10_1_4; } x10; struct _VGLColor { float x_11_1_1; float x_11_1_2; float x_11_1_3; float x_11_1_4; } x11; unsigned int x12; float x13; id x14; id x15; struct { int x_16_1_1; struct _VGLColor { float x_2_2_1; float x_2_2_2; float x_2_2_3; float x_2_2_4; } x_16_1_2; struct _VGLColor { float x_3_2_1; float x_3_2_2; float x_3_2_3; float x_3_2_4; } x_16_1_3[2]; struct _VGLColor { float x_4_2_1; float x_4_2_2; float x_4_2_3; float x_4_2_4; } x_16_1_4; struct _VGLColor { float x_5_2_1; float x_5_2_2; float x_5_2_3; float x_5_2_4; } x_16_1_5; } x16; BOOL x17; float x18; float x19; int x20; BOOL x21; BOOL x22; }*)arg1 atZoom:(float)arg2 tilt:(float)arg3 contentScale:(float)arg4 scaleFactor:(int)arg5;
- (unsigned char)dedupeRank;
- (void)takeFromZoomInvariantProperties:(id)arg1;
- (void)takeFromStyleProperties:(id)arg1 atZoom:(unsigned int)arg2;

@end
