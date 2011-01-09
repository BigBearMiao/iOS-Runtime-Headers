/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */



@interface WebUIModalAlertView : UIAlertView <UIAlertViewDelegate>
{
    NSInteger _clickedButton;
}

+ (id)modalAlertSheetWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;

- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitle:(id)arg4;
- (NSInteger)clickedButton;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(NSInteger)arg2;

@end