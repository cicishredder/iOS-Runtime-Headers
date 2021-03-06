/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

@interface JTCompositionSettings : NSObject {
    int  _frameRate;
    NSObject<OS_dispatch_queue> * _queue;
    struct CGSize { 
        double width; 
        double height; 
    }  _renderSize;
    int  _timeScale;
}

@property (nonatomic) int frameRate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) struct CGSize { double x1; double x2; } renderSize;
@property (nonatomic) int timeScale;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (int)frameRate;
- (id)init;
- (id)queue;
- (struct CGSize { double x1; double x2; })renderSize;
- (void)setFrameRate:(int)arg1;
- (void)setQueue:(id)arg1;
- (void)setRenderSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTimeScale:(int)arg1;
- (int)timeScale;

@end
