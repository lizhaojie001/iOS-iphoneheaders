/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, July 22, 2015 at 5:18:38 PM Japan Standard Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAnimatable.h>
#import <SceneKit/SCNBoundingVolume.h>
#import <SceneKit/SCNShadable.h>
#import <SceneKit/NSCopying.h>
#import <SceneKit/NSSecureCoding.h>

@class NSMutableArray, SCNOrderedDictionary, NSArray, SCNGeometrySource, SCNGeometryElement, SCNShadableHelper, NSString, NSMutableDictionary, SCNMaterial, NSDictionary, SCNProgram;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding> {

	id _geometryReserved;
	_C3DGeometry* _geometry;
	unsigned _isPresentationInstance : 1;
	NSMutableArray* _materials;
	SCNOrderedDictionary* _animations;
	NSArray* _levelsOfDetail;
	unsigned long long _subdivisionLevel;
	SCNGeometrySource* _edgeCreasesSource;
	SCNGeometryElement* _edgeCreasesElement;
	SCNShadableHelper* _shadableHelper;
	SCNVector3* _fixedBoundingBoxExtrema;
	NSString* _name;
	NSMutableDictionary* _valuesForUndefinedKeys;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * materials; 
@property (nonatomic,retain) SCNMaterial * firstMaterial; 
@property (nonatomic,readonly) long long geometryElementCount; 
@property (nonatomic,copy) NSArray * levelsOfDetail; 
@property (assign,nonatomic) unsigned long long subdivisionLevel; 
@property (nonatomic,retain) SCNGeometryElement * edgeCreasesElement; 
@property (nonatomic,retain) SCNGeometrySource * edgeCreasesSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSDictionary * shaderModifiers; 
@property (nonatomic,retain) SCNProgram * program; 
+(id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3 ;
+(id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5 ;
+(id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4 ;
+(id)sphereWithRadius:(double)arg1 options:(id)arg2 ;
+(id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3 ;
+(id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4 ;
+(id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4 ;
+(id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3 ;
+(id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3 ;
+(id)floorWithOptions:(id)arg1 ;
+(id)SCNJSExportProtocol;
+(id)geometryWithGeometryRef:(_C3DGeometry*)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg1 ;
+(id)geometryWithSources:(id)arg1 elements:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)geometry;
-(void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3 ;
-(id)scene;
-(C3DSceneRef)sceneRef;
-(void*)__CFObject;
-(void)_syncObjCAnimations;
-(_C3DAnimationManager*)animationManager;
-(void)_pauseAnimation:(BOOL)arg1 forKey:(id)arg2 ;
-(void)handleBindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)pauseAnimationForKey:(id)arg1 ;
-(void)resumeAnimationForKey:(id)arg1 ;
-(BOOL)isAnimationForKeyPaused:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2 ;
-(void)__removeAnimation:(id)arg1 forKey:(id)arg2 ;
-(_C3DAnimationChannel*)copyAnimationChannelForKeyPath:(id)arg1 ;
-(BOOL)isPausedOrPausedByInheritance;
-(id)presentationInstance;
-(_C3DGeometry*)geometryRef;
-(void)_syncObjCModel;
-(void)_syncEntityObjCModel;
-(C3DMaterialRef)materialRef;
-(void)setProgram:(SCNProgram *)arg1 ;
-(void)_setAttributes:(id)arg1 ;
-(SCNProgram *)program;
-(NSDictionary *)shaderModifiers;
-(void)setShaderModifiers:(NSDictionary *)arg1 ;
-(id)shaderModifiersUniformNames;
-(void)_setupShadableHelperIfNeeded;
-(void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)material;
-(C3DMaterialRef)materialRefCreateIfNeeded;
-(id)presentationGeometry;
-(BOOL)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id*)arg3 remainingPath:(id*)arg4 ;
-(BOOL)getBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(BOOL)getBoundingSphereCenter:(SCNVector3*)arg1 radius:(double*)arg2 ;
-(void)setGeometryRef:(_C3DGeometry*)arg1 ;
-(id)getBoundingBox;
-(id)getBoundingSphere;
-(void)setBoundingBoxMin:(SCNVector3*)arg1 max:(SCNVector3*)arg2 ;
-(BOOL)isPresentationInstance;
-(NSArray *)materials;
-(void)_setGeometryRef:(_C3DGeometry*)arg1 ;
-(_C3DGeometry*)__createCFObject;
-(id)initWithGeometryRef:(_C3DGeometry*)arg1 ;
-(long long)geometryElementCount;
-(id)geometryDescription;
-(id)initPresentationGeometryWithGeometryRef:(_C3DGeometry*)arg1 ;
-(id)geometrySourcesForSemantic:(id)arg1 ;
-(NSArray *)levelsOfDetail;
-(void)setLevelsOfDetail:(NSArray *)arg1 ;
-(void)setMaterials:(NSArray *)arg1 ;
-(void)_setupObjCModelFrom:(id)arg1 ;
-(id)_materialWithName:(id)arg1 ;
-(void)_expand;
-(id)mutableMaterials;
-(id)_firstMaterial;
-(void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1 ;
-(void)removeAllMaterials;
-(SCNMaterial *)firstMaterial;
-(void)setFirstMaterial:(SCNMaterial *)arg1 ;
-(void)removeMaterialAtIndex:(unsigned long long)arg1 ;
-(void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2 ;
-(id)materialWithName:(id)arg1 ;
-(id)geometryElementAtIndex:(long long)arg1 ;
-(unsigned long long)subdivisionLevel;
-(void)setSubdivisionLevel:(unsigned long long)arg1 ;
-(SCNGeometryElement *)edgeCreasesElement;
-(void)setEdgeCreasesElement:(SCNGeometryElement *)arg1 ;
-(SCNGeometrySource *)edgeCreasesSource;
-(void)setEdgeCreasesSource:(SCNGeometrySource *)arg1 ;
-(void)_customEncodingOfSCNGeometry:(id)arg1 ;
-(void)_customDecodingOfSCNGeometry:(id)arg1 ;
-(id)geometrySourceForSemantic:(id)arg1 ;
-(id)keyForNodeAttributes;
-(unsigned long long)countOfMaterials;
-(id)objectInMaterialsAtIndex:(unsigned long long)arg1 ;
-(void)removeMaterial:(id)arg1 ;
-(void)replaceMaterial:(id)arg1 with:(id)arg2 ;
-(void)setMaterial:(id)arg1 ;
-(void)setPrimitiveType:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copy;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)identifier;
-(void)addAnimation:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)animationKeys;
-(id)animationForKey:(id)arg1 ;
-(void)removeAnimationForKey:(id)arg1 ;
-(void)addAnimation:(id)arg1 forKey:(id)arg2 ;
-(void)setIdentifier:(id)arg1 ;
-(void)removeAllAnimations;
-(id)valueForUndefinedKey:(id)arg1 ;
-(long long)primitiveType;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
@end

