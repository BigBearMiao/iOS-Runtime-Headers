/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class <VKOverlayContainerDelegate>, <VKRouteMatchedAnnotationPresentation>, NSMapTable, NSMutableArray, NSMutableSet, NSSet, VKSkyModel, VKStylesheet;

@interface VKOverlayContainerModel : VKMapTileModel <VKMapLayer, VKStylesheetObserver> {
    struct { 
        struct VKPoint { 
            double x; 
            double y; 
            double z; 
        } position; 
        double course; 
        BOOL onRoute; 
    <VKOverlayContainerDelegate> *_delegate;
    NSMutableArray *_overlayPainters;
    NSMutableSet *_overlaysToAdd;
    NSMapTable *_overlaysToPainters;
    NSMutableSet *_overlaysToRemove;
    NSMutableSet *_persistentOverlays;
    NSMapTable *_persistentOverlaysToPainters;
    } _puckPosition;
    <VKRouteMatchedAnnotationPresentation> *_routeLineSplitAnnotation;
    BOOL _shouldCheckForOcclusion;
    BOOL _shouldOccludeTraffic;
    BOOL _shouldShowTraffic;
    VKSkyModel *_skyModel;
    NSMutableSet *_visibleOverlays;
}

@property <VKOverlayContainerDelegate> * delegate;
@property(getter=isInRealisticMode,readonly) BOOL inRealisticMode;
@property(readonly) NSSet * persistentOverlays;
@property(readonly) struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; } puckPosition;
@property(retain) <VKRouteMatchedAnnotationPresentation> * routeLineSplitAnnotation;
@property BOOL shouldCheckForOcclusion;
@property BOOL shouldOccludeTraffic;
@property BOOL shouldShowTraffic;
@property(retain) VKSkyModel * skyModel;
@property(readonly) VKStylesheet * stylesheet;

+ (BOOL)reloadOnStylesheetChange;

- (id).cxx_construct;
- (void)_updatePainterOrdering;
- (void)addPersistentOverlay:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)drawScene:(id)arg1 withContext:(id)arg2;
- (id)init;
- (BOOL)isInRealisticMode;
- (void)layoutScene:(id)arg1 withContext:(id)arg2;
- (unsigned int)mapLayerPosition;
- (id)persistentOverlays;
- (struct { struct VKPoint { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; double x2; BOOL x3; })puckPosition;
- (void)removePersistentOverlay:(id)arg1;
- (id)routeLineSplitAnnotation;
- (void)setDelegate:(id)arg1;
- (void)setRouteLineSplitAnnotation:(id)arg1;
- (void)setShouldCheckForOcclusion:(BOOL)arg1;
- (void)setShouldOccludeTraffic:(BOOL)arg1;
- (void)setShouldShowTraffic:(BOOL)arg1;
- (void)setSkyModel:(id)arg1;
- (BOOL)shouldCheckForOcclusion;
- (BOOL)shouldOccludeTraffic;
- (BOOL)shouldShowTraffic;
- (id)skyModel;
- (id)stylesheet;
- (void)stylesheetDidChange;
- (unsigned int)supportedRenderPasses;

@end
