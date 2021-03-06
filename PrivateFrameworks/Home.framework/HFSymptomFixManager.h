/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface HFSymptomFixManager : NSObject <HMSymptomFixSessionDelegate> {
    NSMapTable * _symptomToRepairSessionMapTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMapTable *symptomToRepairSessionMapTable;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_mapTableKeyFromSymptom:(id)arg1 fixableObject:(id)arg2;
- (bool)anySymptomIsBeingFixedForFixableObject:(id)arg1;
- (void)fixSession:(id)arg1 didChangeState:(long long)arg2;
- (long long)fixStateForSymptom:(id)arg1 forFixableObject:(id)arg2;
- (void)fixSymptom:(id)arg1 forFixableObject:(id)arg2 presentingViewController:(id)arg3;
- (id)fixableObjectForSession:(id)arg1;
- (id)init;
- (void)setSymptomToRepairSessionMapTable:(id)arg1;
- (bool)symptomIsBeingFixed:(id)arg1 forFixableObject:(id)arg2;
- (id)symptomToRepairSessionMapTable;

@end
