/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:22:25 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FuseUI/MusicJSNativeViewController.h>
#import <FuseUI/MusicJSContextualActionsNativeViewController.h>

@protocol MusicJSContextualActionsNativeViewController <JSExport,MusicJSNativeViewController>
@required
-(void)presentShareDocument:(id)arg1 :(id)arg2;

@end


@protocol MusicJSContextualActionsNativeViewControllerDelegate;
@class MusicJSContextualActionsNavigationDocument, MusicJSManagedObject, IKAppDocument, NSDictionary, IKJSNavigationDocument;

@interface MusicJSContextualActionsNativeViewController : MusicJSNativeViewController <MusicJSContextualActionsNativeViewController> {

	MusicJSContextualActionsNavigationDocument* _jsContextualActionsNavigationDocument;
	MusicJSManagedObject* _jsManagedContextualActionsNavigationDocumentObject;
	IKAppDocument* _shareDocument;
	NSDictionary* _shareDocumentOptions;
	id<MusicJSContextualActionsNativeViewControllerDelegate> _delegate;

}

@property (nonatomic,readonly) IKAppDocument * shareDocument;                                                       //@synthesize shareDocument=_shareDocument - In the implementation block
@property (nonatomic,readonly) NSDictionary * shareDocumentOptions;                                                 //@synthesize shareDocumentOptions=_shareDocumentOptions - In the implementation block
@property (assign,nonatomic,__weak) id<MusicJSContextualActionsNativeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IKJSNavigationDocument * navigationDocument; 
-(void)setDelegate:(id<MusicJSContextualActionsNativeViewControllerDelegate>)arg1 ;
-(id<MusicJSContextualActionsNativeViewControllerDelegate>)delegate;
-(id)nativeViewIdentifier;
-(id)jsNavigationDocumentForJSContext:(id)arg1 ;
-(void)presentShareDocument:(id)arg1 :(id)arg2 ;
-(IKAppDocument *)shareDocument;
-(NSDictionary *)shareDocumentOptions;
-(IKJSNavigationDocument *)navigationDocument;
@end

