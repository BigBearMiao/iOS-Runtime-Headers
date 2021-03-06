/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAggregator : NSObject {
    BOOL _hasActiveRequest;
    BOOL _retryPrefersWWAN;
    BOOL _sessionIsRetrying;
    double _startTime;
    int _type;
}

@property int connectionType;
@property BOOL hasActiveRequest;

+ (id)_fullAggDKeyWithPrefix:(id)arg1 error:(id)arg2;
+ (void)logDictationCancelled;
+ (void)logDictationFailedWithError:(id)arg1;
+ (void)logDictationStarted;
+ (void)logDictationSucceeded;
+ (void)logRequestCancelAfterSeconds:(double)arg1;
+ (void)logRequestCompletedWithDuration:(double)arg1;
+ (void)logSiriOtherRequestStarted;
+ (void)logSiriRequestCancelled;
+ (void)logSiriRequestFailedWithError:(id)arg1;
+ (void)logSiriRequestSucceeded;
+ (void)logSiriSpeechRequestStarted;
+ (void)logTimeToBeepWithDuration:(double)arg1;
+ (void)missedAlertContextForRequest;
+ (void)missedAppContextForRequest;

- (void)beginSessionRetryPreferringWWAN:(BOOL)arg1;
- (void)connectionDidDrop;
- (void)connectionDidFail;
- (int)connectionType;
- (BOOL)hasActiveRequest;
- (void)recordFailure:(int)arg1 forConnectionType:(int)arg2;
- (void)recordSessionRetrySuccess;
- (void)recordSuccessForConnectionType:(int)arg1 isWarm:(BOOL)arg2 forTimeInterval:(double)arg3;
- (void)setConnectionType:(int)arg1;
- (void)setHasActiveRequest:(BOOL)arg1;
- (void)speechResponseFailure;
- (void)speechResponseReceived;
- (void)startWaitingForSpeechResponse;

@end
