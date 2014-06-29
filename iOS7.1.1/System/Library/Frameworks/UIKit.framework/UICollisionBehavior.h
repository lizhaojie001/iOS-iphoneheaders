/*
* This header is generated by classdump-dyld 0.2
* on Sunday, June 29, 2014 at 1:22:09 PM Japan Standard Time
* Operating System: Version 7.1.1 (Build 11D201)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDynamicBehavior.h>

@protocol UICollisionBehaviorDelegate;
@class PKExtendedPhysicsBody, NSMutableDictionary, NSArray;

@interface UICollisionBehavior : UIDynamicBehavior {

	bool _usesImplicitBounds;
	UIEdgeInsets _implicitBoundsInsets;
	PKExtendedPhysicsBody* _implicitBoundsBody;
	NSMutableDictionary* _boundaryBodies;
	NSMutableDictionary* _boundaryPaths;
	unsigned long long _collisionMode;
	<UICollisionBehaviorDelegate>* _collisionDelegate;
	unsigned _groupVID;
	unsigned _groupBID;
	struct {
		unsigned delegateBeganWithItem : 1;
		unsigned delegateEndedWithItem : 1;
		unsigned delegateBeganWithBoundary : 1;
		unsigned delegateEndedWithBoundary : 1;
	}  _collisionBehaviorFlags;

}

@property (nonatomic,readonly) NSArray * items; 
@property (assign,nonatomic) unsigned long long collisionMode; 
@property (assign,nonatomic) bool translatesReferenceBoundsIntoBoundary; 
@property (nonatomic,readonly) NSArray * boundaryIdentifiers; 
@property (assign,nonatomic) <UICollisionBehaviorDelegate> * collisionDelegate; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)items;
-(id)initWithItems:(id)arg1 ;
-(void)_associate;
-(void)_dissociate;
-(void)addBoundaryWithIdentifier:(id)arg1 fromPoint:(CGPoint)arg2 toPoint:(CGPoint)arg3 ;
-(void)setCollisionDelegate:(id)arg1 ;
-(void)_reevaluate:(unsigned long long)arg1 ;
-(void)addItem:(id)arg1 ;
-(void)removeItem:(id)arg1 ;
-(id)collisionDelegate;
-(void)_didBeginContact:(id)arg1 ;
-(void)_didEndContact:(id)arg1 ;
-(void)_addItem:(id)arg1 ;
-(void)_setCollisions:(bool)arg1 forBody:(id)arg2 isEdge:(bool)arg3 ;
-(unsigned long long)collisionMode;
-(void)_setupImplicitBoundaries;
-(void)_applySettings;
-(void)_setupExplicitBoundaries;
-(void)_removeImplicitBoundaries;
-(void)_removeExplicitBoundaries;
-(void)_setTranslatesReferenceItemBounds:(bool)arg1 intoBoundaryWithInsets:(UIEdgeInsets)arg2 ;
-(bool)translatesReferenceBoundsIntoBoundary;
-(void)setCollisionMode:(unsigned long long)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundary:(bool)arg1 ;
-(void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(UIEdgeInsets)arg1 ;
-(void)addBoundaryWithIdentifier:(id)arg1 forPath:(id)arg2 ;
-(id)boundaryWithIdentifier:(id)arg1 ;
-(void)removeBoundaryWithIdentifier:(id)arg1 ;
-(id)boundaryIdentifiers;
-(void)removeAllBoundaries;
@end
