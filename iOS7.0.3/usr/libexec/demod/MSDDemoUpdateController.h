/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:18:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/demod
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MSDDemoUpdateController : NSObject {

	BOOL _busy;

}

@property (assign) BOOL busy;              //@synthesize busy=_busy - In the implementation block
+(id)sharedInstance;
-(BOOL)updateDemoContentWithServer:(id)arg1 withDeviceName:(id)arg2 andPassword:(id)arg3 ;
-(void)getDemoUpdateInProgress:(BOOL*)arg1 operationAllowed:(BOOL*)arg2 ;
-(BOOL)enrolledWith:(id)arg1 ;
-(BOOL)cancelDemoUpdate;
-(void)setBusy:(BOOL)arg1 ;
-(BOOL)busy;
@end

