/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSUColor, TSUImage;

@interface MFPImageBrush : MFPBrush  {
    TSUImage *mPhoneImage;
    TSUColor *mPhonePatternColor;
}


- (void)dealloc;
- (id)initWithPhoneImage:(id)arg1;
- (void)fillPath:(struct CGPath { }*)arg1 evenOddRule:(BOOL)arg2;
- (id)color;

@end