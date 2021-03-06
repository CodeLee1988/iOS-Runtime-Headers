/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASResultCandidate : SABaseClientBoundCommand

@property (nonatomic, copy) NSNumber *processedAudioDuration;
@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, copy) NSString *resultId;

+ (id)resultCandidate;
+ (id)resultCandidateWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)processedAudioDuration;
- (id)recognition;
- (bool)requiresResponse;
- (id)resultId;
- (void)setProcessedAudioDuration:(id)arg1;
- (void)setRecognition:(id)arg1;
- (void)setResultId:(id)arg1;

@end
