/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:26:50 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface TSWPTwoPartAction : NSObject {

	/*^block*/ id _startAction;
	/*^block*/ id _cancelAction;
	/*^block*/ id _finishAction;
	bool _performImmediately;

}

@property (assign) bool performImmediately;              //@synthesize performImmediately=_performImmediately - In the implementation block
+(id)actionWithStartAction:(/*^block*/ id)arg1 cancelAction:(/*^block*/ id)arg2 finishAction:(/*^block*/ id)arg3 ;
-(id)initWithStartAction:(/*^block*/ id)arg1 cancelAction:(/*^block*/ id)arg2 finishAction:(/*^block*/ id)arg3 ;
-(void)performStartAction;
-(void)performFinishAction;
-(bool)performImmediately;
-(void)setPerformImmediately:(bool)arg1 ;
-(void)dealloc;
-(void)cancel;
@end

