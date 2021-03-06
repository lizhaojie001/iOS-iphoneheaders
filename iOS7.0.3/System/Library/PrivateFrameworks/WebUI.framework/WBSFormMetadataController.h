/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:34 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <WebUI/WebUI-Structs.h>
@class WBSFormMetadataControllerPrivate;

@interface WBSFormMetadataController : NSObject {

	WBSFormMetadataControllerPrivate* _private;

}
-(void)dealloc;
-(id)init;
-(void)recursivelyClearMetadataForFrames:(id)arg1 ;
-(void)getMetadataForAllFormsInPageWithMainFrame:(id)arg1 requestType:(unsigned)arg2 frames:(id*)arg3 formMetadata:(id*)arg4 ;
-(void)autoFillForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)getMetadataForTextField:(id)arg1 inFrame:(id)arg2 textFieldMetadata:(id*)arg3 formMetadata:(id*)arg4 canAutoComplete:(BOOL*)arg5 ;
-(void)focusField:(id)arg1 inForm:(double)arg2 inFrame:(id)arg3 ;
-(void)fillForm:(double)arg1 inFrame:(id)arg2 withPassword:(id)arg3 ;
-(id)formElementWithFormID:(double)arg1 inFrame:(id)arg2 ;
-(id)metadataForForm:(id)arg1 inFrame:(id)arg2 requestType:(unsigned)arg3 ;
-(id)formAutoFillNodeForField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 ;
-(id)formAutoFillNodeForJSWrapper:(OpaqueJSValueRef)arg1 inContext:(OpaqueJSContextRef)arg2 ;
-(void)clearScriptWorld;
-(BOOL)formClassificationShouldIgnoreAutocompleteAttribute;
-(void)autoFillFormSynchronously:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 ;
-(void)autoFillForm:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 fillSynchronously:(BOOL)arg4 selectFieldWithNameAfterFilling:(id)arg5 ;
-(void)clearMetadataForFrame:(id)arg1 ;
-(FrameMetadata*)metadataForFrame:(id)arg1 requestType:(unsigned)arg2 ;
-(void)recursivelyCollectMetadataInFrame:(id)arg1 requestType:(unsigned)arg2 frames:(id)arg3 formMetadata:(id)arg4 ;
-(unsigned)userEditedTextControlCountInArray:(OpaqueJSValueRef)arg1 context:(OpaqueJSContextRef)arg2 expectTextFieldsRatherThanTextAreas:(BOOL)arg3 ;
-(void)countUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned*)arg2 textAreas:(unsigned*)arg3 ;
-(void)recursivelyCountUserEditedTextControlsInFrame:(id)arg1 textFields:(unsigned*)arg2 textAreas:(unsigned*)arg3 ;
-(void)passwordFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)creditCardFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)usernameFieldFocused:(id)arg1 inForm:(id)arg2 inFrame:(id)arg3 ;
-(void)passwordFieldBlurredInFrame:(id)arg1 ;
-(void)creditCardFieldBlurredInFrame:(id)arg1 ;
-(void)usernameFieldBlurredInFrame:(id)arg1 ;
-(void)passwordFieldTextDidChange:(id)arg1 inFrame:(id)arg2 ;
-(void)autoFillFormAsynchronously:(double)arg1 inFrame:(id)arg2 withValues:(id)arg3 selectFieldWithNameAfterFilling:(id)arg4 ;
-(void)removeAutoFillHighlightFromField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 ;
-(void)selectRange:(NSRange)arg1 inField:(id)arg2 form:(double)arg3 inFrame:(id)arg4 ;
-(id)metadataForTextField:(id)arg1 form:(double)arg2 inFrame:(id)arg3 afterReplacingRange:(NSRange)arg4 withString:(id)arg5 andSelectingTailStartingAt:(unsigned)arg6 ;
-(BOOL)pageWithMainFrameMeetsEditedFormTextWarningCriteria:(id)arg1 ;
-(void)textFieldFocused:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldBlurred:(id)arg1 inFrame:(id)arg2 ;
-(void)textFieldTextDidChange:(id)arg1 inFrame:(id)arg2 ;
@end

