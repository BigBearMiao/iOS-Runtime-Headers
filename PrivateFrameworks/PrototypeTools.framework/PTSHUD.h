/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSArray, NSDictionary, NSMutableDictionary, NSString, PT2DGraphView, PTSSlider, UILabel, UIView, _UISettings, _UISettingsGroup;

@interface PTSHUD : UIView <UIGestureRecognizerDelegate, _UISettingsKeyPathObserver, _UISettingsGroupObserver> {
    struct CGPoint { 
        float x; 
        float y; 
    NSMutableDictionary *_archiveA;
    BOOL _archiveAIsActive;
    NSMutableDictionary *_archiveB;
    NSDictionary *_configuration;
    PT2DGraphView *_coverageView;
    UILabel *_infoLabel;
    } _initialPoint;
    NSString *_mode;
    NSArray *_modeChangeKeys;
    UIView *_panView;
    NSString *_persisentSettingsGroupFilename;
    int _savedSettingsIndex;
    PTSSlider *_savedSettingsIndexSlider;
    _UISettings *_settings;
    _UISettingsGroup *_settingsGroup;
    BOOL _showing;
}

@property(retain) NSMutableDictionary * archiveA;
@property BOOL archiveAIsActive;
@property(retain) NSMutableDictionary * archiveB;
@property(copy) NSDictionary * configuration;
@property(retain) PT2DGraphView * coverageView;
@property(retain) UILabel * infoLabel;
@property struct CGPoint { float x1; float x2; } initialPoint;
@property(copy) NSString * mode;
@property(copy) NSArray * modeChangeKeys;
@property(retain) UIView * panView;
@property(copy) NSString * persisentSettingsGroupFilename;
@property int savedSettingsIndex;
@property(retain) PTSSlider * savedSettingsIndexSlider;
@property(retain) _UISettings * settings;
@property(retain) _UISettingsGroup * settingsGroup;
@property BOOL showing;

+ (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })defaultFrame;
+ (id)sharedInstance;
+ (id)window;

- (void).cxx_destruct;
- (id)archiveA;
- (BOOL)archiveAIsActive;
- (id)archiveB;
- (id)configuration;
- (void)configureForSettings:(id)arg1 settingsGroup:(id)arg2;
- (void)configureForSettings:(id)arg1;
- (id)coverageView;
- (void)handleVerticalPanGesture:(id)arg1;
- (void)hide;
- (id)infoLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGPoint { float x1; float x2; })initialPoint;
- (id)mode;
- (id)modeChangeKeys;
- (id)panView;
- (id)persisentSettingsGroupFilename;
- (void)restoreDefaultValuesAction:(id)arg1;
- (void)saveToPersistentSettingsAction:(id)arg1;
- (int)savedSettingsIndex;
- (id)savedSettingsIndexSlider;
- (void)savedSettingsIndexSliderValueChanged:(id)arg1;
- (void)setArchiveA:(id)arg1;
- (void)setArchiveAIsActive:(BOOL)arg1;
- (void)setArchiveB:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setCoverageView:(id)arg1;
- (void)setInfoLabel:(id)arg1;
- (void)setInitialPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMode:(id)arg1;
- (void)setModeChangeKeys:(id)arg1;
- (void)setPanView:(id)arg1;
- (void)setPersisentSettingsGroupFilename:(id)arg1;
- (void)setSavedSettingsIndex:(int)arg1;
- (void)setSavedSettingsIndexSlider:(id)arg1;
- (void)setSettings:(id)arg1;
- (void)setSettingsGroup:(id)arg1;
- (void)setShowing:(BOOL)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settings;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned int)arg3 toIndex:(unsigned int)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned int)arg3;
- (id)settingsGroup;
- (void)show;
- (void)showInMode:(id)arg1;
- (void)showInModeForKeyPath:(id)arg1;
- (void)showMessage:(id)arg1;
- (BOOL)showSavedSettingsIndex:(int)arg1;
- (BOOL)showing;

@end
