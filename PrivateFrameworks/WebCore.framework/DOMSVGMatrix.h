/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMSVGMatrix : DOMObject {
}

@property double a;
@property double b;
@property double c;
@property double d;
@property double e;
@property double f;

+ (id)_wrapSVGMatrix:(struct AffineTransform { struct CGAffineTransform { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; } x1; })arg1;

- (struct AffineTransform { struct CGAffineTransform { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; } x1; })_SVGMatrix;
- (id)_initWithSVGMatrix:(struct AffineTransform { struct CGAffineTransform { float x_1_1_1; float x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; float x_1_1_6; } x1; })arg1;
- (double)a;
- (double)b;
- (double)c;
- (double)d;
- (void)dealloc;
- (double)e;
- (double)f;
- (void)finalize;
- (id)flipX;
- (id)flipY;
- (id)inverse;
- (id)multiply:(id)arg1;
- (id)rotate:(float)arg1;
- (id)rotateFromVector:(float)arg1 y:(float)arg2;
- (id)scale:(float)arg1;
- (id)scaleNonUniform:(float)arg1 scaleFactorY:(float)arg2;
- (void)setA:(double)arg1;
- (void)setB:(double)arg1;
- (void)setC:(double)arg1;
- (void)setD:(double)arg1;
- (void)setE:(double)arg1;
- (void)setF:(double)arg1;
- (id)skewX:(float)arg1;
- (id)skewY:(float)arg1;
- (id)translate:(float)arg1 y:(float)arg2;

@end