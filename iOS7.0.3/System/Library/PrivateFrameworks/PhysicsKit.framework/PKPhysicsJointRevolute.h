/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:51 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRevolute : PKPhysicsJoint {

	unsigned* _jointDef : 2RevoluteJointDef;
	unsigned* _joint : 2RevoluteJoint;
	CGPoint _anchor;

}

@property (assign,nonatomic) BOOL shouldEnableLimits; 
@property (assign,nonatomic) float lowerAngleLimit; 
@property (assign,nonatomic) float upperAngleLimit; 
@property (assign,nonatomic) float frictionTorque; 
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
-(BOOL)shouldEnableLimits;
-(void)setShouldEnableLimits:(BOOL)arg1 ;
-(float)lowerAngleLimit;
-(void)setLowerAngleLimit:(float)arg1 ;
-(float)upperAngleLimit;
-(void)setUpperAngleLimit:(float)arg1 ;
-(float)frictionTorque;
-(void)setFrictionTorque:(float)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id).cxx_construct;
-(void)create;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchor:(CGPoint)arg3 ;
@end

