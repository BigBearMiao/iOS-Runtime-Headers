/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLPhotoScrollerViewController : PLPhotoBrowserController {
    BOOL _dontChangeStatusBar;
    BOOL _modalSheetIsPresent;
    BOOL _viewWillDisappear;
}

- (id)_initWithAssetContainerList:(id)arg1 lockStatusBar:(BOOL)arg2 currentImageIndexPath:(id)arg3 delayImageLoading:(BOOL)arg4;
- (BOOL)dontChangeStatusBar;
- (void)loadView;
- (id)remakerContainerView;
- (void)removeRemakerContainerView;
- (void)setDontChangeStatusBar:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end
