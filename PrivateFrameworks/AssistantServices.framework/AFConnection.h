/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class <AFAssistantUIService>, <AFSpeechDelegate>, NSMutableDictionary, NSString, NSXPCConnection;

@interface AFConnection : NSObject {
    unsigned int _stateInSync : 1;
    unsigned int _shouldSpeak : 1;
    unsigned int _isCapturingSpeech : 1;
    unsigned int _hasOutstandingRequest : 1;
    unsigned int _clientStateIsInSync : 1;
    unsigned int _voiceOverIsActive : 1;
    unsigned int _audioSessionID;
    float _averagePower;
    NSXPCConnection *_connection;
    <AFAssistantUIService> *_delegate;
    BOOL _hasActiveRequest;
    NSString *_outstandingRequestClass;
    float _peakPower;
    NSMutableDictionary *_replyHandlerForAceId;
    <AFSpeechDelegate> *_speechDelegate;
}

@property <AFAssistantUIService> * delegate;
@property(readonly) BOOL isRecording;
@property <AFSpeechDelegate> * speechDelegate;

+ (BOOL)assistantIsSupported;
+ (BOOL)assistantIsSupportedForLanguageCode:(id)arg1 error:(id*)arg2;
+ (void)beginMonitoringAvailability;
+ (id)currentLanguageCode;
+ (void)defrost;
+ (void)initialize;
+ (BOOL)isAvailable;
+ (BOOL)isReadyForLanguageCode:(id)arg1;
+ (id)outputVoice;
+ (void)stopMonitoringAvailability;
+ (BOOL)userDataSyncNeeded;

- (void).cxx_destruct;
- (void)_barrier;
- (void)_cancelRequestTimeout;
- (void)_checkAndSetIsCapturingSpeech:(BOOL)arg1;
- (void)_clearAssistantInfoForAccountWithIdentifier:(id)arg1;
- (void)_clearConnection;
- (id)_clientService;
- (id)_clientServiceWithErrorHandler:(id)arg1;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_doCommand:(id)arg1 reply:(id)arg2;
- (void)_extendRequestTimeout;
- (void)_invokeRequestTimeout;
- (void)_requestDidEnd;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2 isBackgroundRequest:(BOOL)arg3;
- (void)_requestWillBeginWithRequestClass:(id)arg1 isSpeechRequest:(BOOL)arg2;
- (void)_scheduleRequestTimeout;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setShouldSpeak:(BOOL)arg1;
- (void)_speechRecordingDidUpdateAveragePower:(float)arg1 peakPower:(float)arg2;
- (void)_tellDelegateAudioSessionIDChanged:(unsigned int)arg1;
- (void)_tellDelegateRequestFailed:(id)arg1 requestClass:(id)arg2;
- (void)_tellDelegateRequestFinished;
- (void)_tellDelegateRequestWillStart;
- (void)_tellDelegateShouldSpeakChanged:(BOOL)arg1;
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidBeginOnAVRecordRoute:(id)arg1;
- (void)_tellSpeechDelegateRecordingDidCancel;
- (void)_tellSpeechDelegateRecordingDidEnd;
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;
- (void)_tellSpeechDelegateRecordingWillBegin;
- (void)_tellSpeechDelegateSpeechRecognized:(id)arg1;
- (void)_updateClientState;
- (void)_updateState;
- (void)_willCancelRequest;
- (void)_willCompleteRequest;
- (void)_willFailRequestWithError:(id)arg1;
- (void)_willStartRequestForSpeech:(BOOL)arg1;
- (unsigned int)audioSessionID;
- (float)averagePower;
- (void)cancelRequest;
- (void)cancelSpeech;
- (void)clearContext;
- (void)dealloc;
- (id)delegate;
- (void)endSession;
- (id)init;
- (BOOL)isRecording;
- (float)peakPower;
- (void)preheat;
- (void)redoRequest;
- (void)rollbackClearContext;
- (void)rollbackRequest;
- (void)sendGenericAceCommand:(id)arg1 conflictHandler:(id)arg2;
- (void)sendGenericAceCommand:(id)arg1;
- (void)sendReplyCommand:(id)arg1;
- (void)setAlertContextWithBulletins:(id)arg1;
- (void)setApplicationContext;
- (void)setDelegate:(id)arg1;
- (void)setIsStark:(BOOL)arg1;
- (void)setLockState:(BOOL)arg1 screenLocked:(BOOL)arg2;
- (void)setSpeechDelegate:(id)arg1;
- (void)setVoiceOverIsActive:(BOOL)arg1;
- (BOOL)shouldSpeak;
- (id)speechDelegate;
- (void)startDirectActionRequestWithString:(id)arg1;
- (void)startRequestWithCorrectedText:(id)arg1 forSpeechIdentifier:(id)arg2;
- (void)startRequestWithText:(id)arg1;
- (void)startSpeechPronunciationRequestWithOptions:(id)arg1 pronunciationContext:(id)arg2;
- (void)startSpeechRequestWithOptions:(id)arg1;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1 isNarrowBand:(BOOL)arg2;
- (void)startSpeechRequestWithSpeechFileAtURL:(id)arg1;
- (void)stopSpeech;
- (void)stopSpeechWithOptions:(id)arg1;
- (void)undoRequest;
- (void)updateSpeechOptions:(id)arg1;

@end
