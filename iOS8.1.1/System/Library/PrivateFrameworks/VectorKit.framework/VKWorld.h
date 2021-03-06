/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:34:24 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKWorldDelegate;
#import <VectorKit/VectorKit-Structs.h>
@class VKModelObject;

@interface VKWorld : NSObject {

	id<VKWorldDelegate> _delegate;
	VKModelObject* _modelRoot;

}

@property (nonatomic,readonly) VKModelObject * modelRoot;               //@synthesize modelRoot=_modelRoot - In the implementation block
@property (assign,nonatomic) id<VKWorldDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id<VKWorldDelegate>)arg1 ;
-(id)init;
-(id)description;
-(id<VKWorldDelegate>)delegate;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 dispatchQueue:(id)arg4 ;
-(void)runAnimation:(id)arg1 ;
-(VKModelObject *)modelRoot;
-(void)worldLayoutDidChange;
-(void)worldDisplayDidChange;
@end

