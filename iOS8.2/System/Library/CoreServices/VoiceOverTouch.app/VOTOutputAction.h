/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:23:28 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/VoiceOverTouch.app/vot
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, SCRCIndexMap, VOTOutputRequest;

@interface VOTOutputAction : NSObject {

	NSString* _string;
	NSString* _originalString;
	NSString* _soundPath;
	int _component;
	char _hasBeenDispatched;
	int _synchronization;
	SCRCIndexMap* _variants;
	char _wasDivided;
	unsigned long long _outputActionID;
	VOTOutputRequest* _outputRequest;

}

@property (nonatomic,retain) NSString * string; 
@property (nonatomic,readonly) NSString * originalString;                   //@synthesize originalString=_originalString - In the implementation block
@property (assign,nonatomic) char hasBeenDispatched; 
@property (assign,nonatomic) char wasDivided; 
@property (assign,nonatomic) int synchronization; 
@property (assign,nonatomic) int component; 
@property (assign,nonatomic) VOTOutputRequest * outputRequest; 
+(unsigned long long)newOutputActionID;
-(id)soundPath;
-(void)setOutputRequest:(VOTOutputRequest *)arg1 ;
-(void)setObject:(id)arg1 forVariant:(int)arg2 ;
-(id)initWithTextDisplay:(id)arg1 ;
-(void)setWasDivided:(char)arg1 ;
-(id)initWithSoundPath:(id)arg1 ;
-(void)setSynchronization:(int)arg1 ;
-(id)objectForVariant:(int)arg1 ;
-(void)_setSoundPath:(id)arg1 ;
-(unsigned long long)outputActionID;
-(char)hasBeenDispatched;
-(void)setHasBeenDispatched:(char)arg1 ;
-(int)synchronization;
-(id)outputVariants;
-(void)removeObjectForVariant:(int)arg1 ;
-(char)wasDivided;
-(VOTOutputRequest *)outputRequest;
-(void)setComponent:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)string;
-(id)initWithString:(id)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(NSString *)originalString;
-(int)component;
@end
