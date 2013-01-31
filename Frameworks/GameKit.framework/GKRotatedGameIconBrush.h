/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage;

@interface GKRotatedGameIconBrush : GKImageBrush <GKBrushIdentification> {
    float _inputRotation;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _inputRect;
    UIImage *_maskImage;
    UIImage *_overlayImage;
    BOOL _horizontalFlip;
    float _iconScale;
}

@property float inputRotation;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } inputRect;
@property(retain) UIImage * maskImage;
@property(retain) UIImage * overlayImage;
@property BOOL horizontalFlip;
@property float iconScale;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setIconScale:(float)arg1;
- (float)iconScale;
- (BOOL)horizontalFlip;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })inputRect;
- (float)inputRotation;
- (id)overlayImage;
- (id)maskImage;
- (struct CGSize { float x1; float x2; })sizeForInput:(id)arg1;
- (float)scaleForInput:(id)arg1;
- (id)renderedImageIdentifier;
- (void)setInputRotation:(float)arg1;
- (void)setInputRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHorizontalFlip:(BOOL)arg1;
- (void)setOverlayImage:(id)arg1;
- (void)setMaskImage:(id)arg1;
- (void)drawInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;

@end