/*
* This header is generated by classdump-dyld 0.2
* on Saturday, June 28, 2014 at 7:32:29 AM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <demod/MSDDemoUpdateStatusDelegate.h>

@class NSString, MSDContentServerConnection;

@interface MSDContentServer : NSObject <MSDDemoUpdateStatusDelegate> {

	BOOL _connectable;
	NSString* _password;
	NSString* _bonjourName;
	MSDContentServerConnection* _demoUpdateConnection;
	MSDContentServerConnection* _infoReportConnection;
	NSString* _manifestPath;
	NSString* _contentPath;

}

@property (nonatomic,retain) NSString * password;                                  //@synthesize password=_password - In the implementation block
@property (nonatomic,retain) NSString * bonjourName;                               //@synthesize bonjourName=_bonjourName - In the implementation block
@property (retain) MSDContentServerConnection * demoUpdateConnection;              //@synthesize demoUpdateConnection=_demoUpdateConnection - In the implementation block
@property (retain) MSDContentServerConnection * infoReportConnection;              //@synthesize infoReportConnection=_infoReportConnection - In the implementation block
@property (retain) NSString * manifestPath;                                        //@synthesize manifestPath=_manifestPath - In the implementation block
@property (retain) NSString * contentPath;                                         //@synthesize contentPath=_contentPath - In the implementation block
@property (assign) BOOL connectable;                                               //@synthesize connectable=_connectable - In the implementation block
+(id)sharedInstance;
-(void)initConnection:(id)arg1 port:(id)arg2 connectableGuess:(BOOL)arg3 ;
-(void)demoUpdateCompleted:(id)arg1 ;
-(id)demoUpdateConnection;
-(void)setDemoUpdateConnection:(id)arg1 ;
-(id)infoReportConnection;
-(void)setInfoReportConnection:(id)arg1 ;
-(void)setManifestPath:(id)arg1 ;
-(void)setContentPath:(id)arg1 ;
-(id)manifestPath;
-(id)contentPath;
-(BOOL)queryManifestAndContentPath:(id*)arg1 ;
-(void)demoUpdateFailed:(id)arg1 ;
-(void)demoUpdateProgress:(id)arg1 ;
-(BOOL)enroll:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEnrolled:(id*)arg1 ;
-(id)downloadManifest:(id*)arg1 ;
-(BOOL)downloadContentFile:(id)arg1 to:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(BOOL)uploadDeviceInfo:(id)arg1 error:(id*)arg2 ;
-(id)password;
-(id)bonjourName;
-(void)setBonjourName:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void).cxx_destruct;
-(BOOL)connectable;
-(void)setConnectable:(BOOL)arg1 ;
-(void)closeConnection;
@end

