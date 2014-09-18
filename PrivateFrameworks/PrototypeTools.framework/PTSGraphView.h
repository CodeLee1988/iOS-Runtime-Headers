/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@class NSString, _UISettings, _UISettingsGroup;

@interface PTSGraphView : PT2DGraphView <PTSHUDControl, _UISettingsKeyPathObserver> {
    int _alignment;
    _UISettings *_settings;
    _UISettingsGroup *_settingsGroup;
    NSString *_valueKeyPath;
    NSString *_xAxisValueKeyPath;
    NSString *_yAxisValueKeyPath;
    bool_enabled;
}

@property int alignment;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property bool enabled;
@property(readonly) unsigned long long hash;
@property _UISettings * settings;
@property _UISettingsGroup * settingsGroup;
@property(readonly) Class superclass;
@property(copy) NSString * valueKeyPath;
@property(copy) NSString * xAxisValueKeyPath;
@property(copy) NSString * yAxisValueKeyPath;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })defaultFrame;
+ (id)graphView;

- (void).cxx_destruct;
- (int)alignment;
- (void)dealloc;
- (bool)enabled;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setAlignment:(int)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setSettings:(id)arg1 valueKeyPath:(id)arg2;
- (void)setSettings:(id)arg1;
- (void)setSettingsGroup:(id)arg1;
- (void)setValueKeyPath:(id)arg1;
- (void)setXAxisValueKeyPath:(id)arg1;
- (void)setYAxisValueKeyPath:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (id)settings;
- (id)settingsGroup;
- (void)updateGraphData;
- (id)valueKeyPath;
- (id)xAxisValueKeyPath;
- (id)yAxisValueKeyPath;

@end