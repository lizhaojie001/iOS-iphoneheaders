/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:08 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class AXEventHandInfoRepresentation, AXEventKeyInfoRepresentation, NSString, NSData;

@interface AXEventRepresentation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isBuiltIn;
	BOOL _isGeneratedEvent;
	unsigned _type;
	int _subtype;
	int _flags;
	AXEventHandInfoRepresentation* _handInfo;
	AXEventKeyInfoRepresentation* _keyInfo;
	NSString* _clientId;
	unsigned _taskPort;
	unsigned _contextId;
	void* _window;
	int _pid;
	NSData* _data;
	NSData* _HIDAttributeData;
	CGPoint _location;
	CGPoint _windowLocation;
	unsigned long long _time;
	unsigned long long _HIDTime;
	unsigned long long _additionalFlags;
	unsigned long long _HIDSenderId;

}

@property (assign,nonatomic) unsigned type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int subtype;                                           //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) CGPoint location;                                      //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGPoint windowLocation;                                //@synthesize windowLocation=_windowLocation - In the implementation block
@property (assign,nonatomic) unsigned long long time;                               //@synthesize time=_time - In the implementation block
@property (assign,nonatomic) int flags;                                             //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) AXEventHandInfoRepresentation * handInfo;              //@synthesize handInfo=_handInfo - In the implementation block
@property (nonatomic,retain) AXEventKeyInfoRepresentation * keyInfo;                //@synthesize keyInfo=_keyInfo - In the implementation block
@property (nonatomic,retain) NSString * clientId;                                   //@synthesize clientId=_clientId - In the implementation block
@property (assign,nonatomic) unsigned taskPort;                                     //@synthesize taskPort=_taskPort - In the implementation block
@property (assign,nonatomic) unsigned long long HIDTime;                            //@synthesize HIDTime=_HIDTime - In the implementation block
@property (assign,nonatomic) unsigned long long additionalFlags;                    //@synthesize additionalFlags=_additionalFlags - In the implementation block
@property (assign,nonatomic) unsigned contextId;                                    //@synthesize contextId=_contextId - In the implementation block
@property (assign,nonatomic) BOOL isBuiltIn;                                        //@synthesize isBuiltIn=_isBuiltIn - In the implementation block
@property (assign,nonatomic) BOOL isGeneratedEvent;                                 //@synthesize isGeneratedEvent=_isGeneratedEvent - In the implementation block
@property (assign,nonatomic) void* window;                                          //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) int pid;                                               //@synthesize pid=_pid - In the implementation block
@property (nonatomic,retain) NSData * data;                                         //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSData * HIDAttributeData;                             //@synthesize HIDAttributeData=_HIDAttributeData - In the implementation block
@property (assign,nonatomic) unsigned long long HIDSenderId;                        //@synthesize HIDSenderId=_HIDSenderId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)representationWithHIDEvent:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)representationWithEventRecord:(SCD_Struct_AX2*)arg1 ;
+(id)representationWithType:(unsigned)arg1 subtype:(int)arg2 time:(unsigned long long)arg3 location:(CGPoint)arg4 windowLocation:(CGPoint)arg5 handInfo:(id)arg6 ;
+(id)_digitizerRepresentation:(IOHIDEventRef)arg1 hidStreamIdentifier:(id)arg2 ;
+(id)_keyboardButtonEvent:(IOHIDEventRef)arg1 ;
+(id)representationWithData:(id)arg1 ;
+(id)representationWithLocation:(CGPoint)arg1 windowLocation:(CGPoint)arg2 handInfo:(id)arg3 ;
+(id)keyRepresentationWithType:(unsigned)arg1 ;
+(id)buttonRepresentationWithType:(unsigned)arg1 ;
+(id)touchRepresentationWithHandType:(unsigned)arg1 location:(CGPoint)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void*)window;
-(id)description;
-(void)setWindow:(void*)arg1 ;
-(void)setType:(unsigned)arg1 ;
-(unsigned)type;
-(int)subtype;
-(unsigned)contextId;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setSubtype:(int)arg1 ;
-(void)setTime:(unsigned long long)arg1 ;
-(unsigned long long)time;
-(CGPoint)location;
-(void)setContextId:(unsigned)arg1 ;
-(SCD_Struct_AX2*)newEventRecord;
-(unsigned)taskPort;
-(void)setTaskPort:(unsigned)arg1 ;
-(void)setClientId:(id)arg1 ;
-(id)handInfo;
-(void)setWindowLocation:(CGPoint)arg1 ;
-(void)setHandInfo:(id)arg1 ;
-(void)setIsGeneratedEvent:(BOOL)arg1 ;
-(void)setKeyInfo:(id)arg1 ;
-(void)setHIDAttributeData:(id)arg1 ;
-(void)setIsBuiltIn:(BOOL)arg1 ;
-(void)setHIDSenderId:(unsigned long long)arg1 ;
-(void)setHIDTime:(unsigned long long)arg1 ;
-(unsigned long long)HIDTime;
-(IOHIDEventRef)_newHandHIDEventRef;
-(IOHIDEventRef)_newButtonHIDEventRef;
-(IOHIDEventRef)_newKeyboardHIDEventRef;
-(BOOL)isBuiltIn;
-(id)HIDAttributeData;
-(unsigned long long)HIDSenderId;
-(id)keyInfo;
-(BOOL)isGeneratedEvent;
-(CGPoint)windowLocation;
-(id)clientId;
-(unsigned long long)additionalFlags;
-(void)setAdditionalFlags:(unsigned long long)arg1 ;
-(unsigned)_contextIDFromHIDEvent:(IOHIDEventRef)arg1 ;
-(IOHIDEventRef)newHIDEventRef;
-(id)normalizedEventRepresentation:(BOOL)arg1 ;
-(id)denormalizedEventRepresentation:(BOOL)arg1 ;
-(GSEventRef)newGSEventRef;
-(unsigned)firstPathContextId;
-(int)flags;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setFlags:(int)arg1 ;
-(void)setLocation:(CGPoint)arg1 ;
-(id)dataRepresentation;
@end

