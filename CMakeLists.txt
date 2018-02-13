cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -frtti -DCC_ENABLE_CHIPMUNK_INTEGRATION=1 -std=c++11 -fsigned-char -Wno-extern-c-compat")

add_definitions(-DUSE_FILE32API)

add_library(cocos2dx_static STATIC
            cocos2d/cocos/cocos2d.cpp
            cocos2d/cocos/2d/CCAction.cpp
            cocos2d/cocos/2d/CCActionCamera.cpp
            cocos2d/cocos/2d/CCActionCatmullRom.cpp
            cocos2d/cocos/2d/CCActionEase.cpp
            cocos2d/cocos/2d/CCActionGrid.cpp
            cocos2d/cocos/2d/CCActionGrid3D.cpp
            cocos2d/cocos/2d/CCActionInstant.cpp
            cocos2d/cocos/2d/CCActionInterval.cpp
            cocos2d/cocos/2d/CCActionManager.cpp
            cocos2d/cocos/2d/CCActionPageTurn3D.cpp
            cocos2d/cocos/2d/CCActionProgressTimer.cpp
            cocos2d/cocos/2d/CCActionTiledGrid.cpp
            cocos2d/cocos/2d/CCActionTween.cpp
            cocos2d/cocos/2d/CCAnimation.cpp
            cocos2d/cocos/2d/CCAnimationCache.cpp
            cocos2d/cocos/2d/CCAtlasNode.cpp
            cocos2d/cocos/2d/CCCamera.cpp
            cocos2d/cocos/2d/CCCameraBackgroundBrush.cpp
            cocos2d/cocos/2d/CCClippingNode.cpp
            cocos2d/cocos/2d/CCClippingRectangleNode.cpp
            cocos2d/cocos/2d/CCComponent.cpp
            cocos2d/cocos/2d/CCComponentContainer.cpp
            cocos2d/cocos/2d/CCDrawNode.cpp
            cocos2d/cocos/2d/CCDrawingPrimitives.cpp
            cocos2d/cocos/2d/CCFastTMXLayer.cpp
            cocos2d/cocos/2d/CCFastTMXTiledMap.cpp
            cocos2d/cocos/2d/CCFont.cpp
            cocos2d/cocos/2d/CCFontAtlas.cpp
            cocos2d/cocos/2d/CCFontAtlasCache.cpp
            cocos2d/cocos/2d/CCFontCharMap.cpp
            cocos2d/cocos/2d/CCFontFNT.cpp
            cocos2d/cocos/2d/CCFontFreeType.cpp
            cocos2d/cocos/2d/CCGLBufferedNode.cpp
            cocos2d/cocos/2d/CCGrabber.cpp
            cocos2d/cocos/2d/CCGrid.cpp
            cocos2d/cocos/2d/CCLabel.cpp
            cocos2d/cocos/2d/CCLabelAtlas.cpp
            cocos2d/cocos/2d/CCLabelBMFont.cpp
            cocos2d/cocos/2d/CCLabelTTF.cpp
            cocos2d/cocos/2d/CCLabelTextFormatter.cpp
            cocos2d/cocos/2d/CCLayer.cpp
            cocos2d/cocos/2d/CCLight.cpp
            cocos2d/cocos/2d/CCMenu.cpp
            cocos2d/cocos/2d/CCMenuItem.cpp
            cocos2d/cocos/2d/CCMotionStreak.cpp
            cocos2d/cocos/2d/CCNode.cpp
            cocos2d/cocos/2d/CCNodeGrid.cpp
            cocos2d/cocos/2d/CCParallaxNode.cpp
            cocos2d/cocos/2d/CCParticleBatchNode.cpp
            cocos2d/cocos/2d/CCParticleExamples.cpp
            cocos2d/cocos/2d/CCParticleSystem.cpp
            cocos2d/cocos/2d/CCParticleSystemQuad.cpp
            cocos2d/cocos/2d/CCProgressTimer.cpp
            cocos2d/cocos/2d/CCProtectedNode.cpp
            cocos2d/cocos/2d/CCRenderTexture.cpp
            cocos2d/cocos/2d/CCScene.cpp
            cocos2d/cocos/2d/CCSprite.cpp
            cocos2d/cocos/2d/CCSpriteBatchNode.cpp
            cocos2d/cocos/2d/CCSpriteFrame.cpp
            cocos2d/cocos/2d/CCSpriteFrameCache.cpp
            cocos2d/cocos/2d/CCTMXLayer.cpp
            cocos2d/cocos/2d/CCTMXObjectGroup.cpp
            cocos2d/cocos/2d/CCTMXTiledMap.cpp
            cocos2d/cocos/2d/CCTMXXMLParser.cpp
            cocos2d/cocos/2d/CCTextFieldTTF.cpp
            cocos2d/cocos/2d/CCTileMapAtlas.cpp
            cocos2d/cocos/2d/CCTransition.cpp
            cocos2d/cocos/2d/CCTransitionPageTurn.cpp
            cocos2d/cocos/2d/CCTransitionProgress.cpp
            cocos2d/cocos/2d/CCTweenFunction.cpp
            cocos2d/cocos/2d/CCAutoPolygon.cpp
            cocos2d/cocos/3d/CCFrustum.cpp
            cocos2d/cocos/3d/CCPlane.cpp
            cocos2d/cocos/platform/CCFileUtils.cpp
            cocos2d/cocos/platform/CCGLView.cpp
            cocos2d/cocos/platform/CCImage.cpp
            cocos2d/cocos/platform/CCSAXParser.cpp
            cocos2d/cocos/platform/CCThread.cpp
            cocos2d/cocos/math/MathUtil.cpp
            cocos2d/cocos/math/CCAffineTransform.cpp
            cocos2d/cocos/math/CCGeometry.cpp
            cocos2d/cocos/math/CCVertex.cpp
            cocos2d/cocos/math/Mat4.cpp
            cocos2d/cocos/math/Quaternion.cpp
            cocos2d/cocos/math/TransformUtils.cpp
            cocos2d/cocos/math/Vec2.cpp
            cocos2d/cocos/math/Vec3.cpp
            cocos2d/cocos/math/Vec4.cpp
            cocos2d/cocos/base/CCNinePatchImageParser.cpp
            cocos2d/cocos/base/CCStencilStateManager.cpp
            cocos2d/cocos/base/CCAsyncTaskPool.cpp
            cocos2d/cocos/base/CCAutoreleasePool.cpp
            cocos2d/cocos/base/CCConfiguration.cpp
            cocos2d/cocos/base/CCConsole.cpp
            cocos2d/cocos/base/CCController-android.cpp
            cocos2d/cocos/base/CCController.cpp
            cocos2d/cocos/base/CCData.cpp
            cocos2d/cocos/base/CCDataVisitor.cpp
            cocos2d/cocos/base/CCDirector.cpp
            cocos2d/cocos/base/CCEvent.cpp
            cocos2d/cocos/base/CCEventAcceleration.cpp
            cocos2d/cocos/base/CCEventController.cpp
            cocos2d/cocos/base/CCEventCustom.cpp
            cocos2d/cocos/base/CCEventDispatcher.cpp
            cocos2d/cocos/base/CCEventFocus.cpp
            cocos2d/cocos/base/CCEventKeyboard.cpp
            cocos2d/cocos/base/CCEventListener.cpp
            cocos2d/cocos/base/CCEventListenerAcceleration.cpp
            cocos2d/cocos/base/CCEventListenerController.cpp
            cocos2d/cocos/base/CCEventListenerCustom.cpp
            cocos2d/cocos/base/CCEventListenerFocus.cpp
            cocos2d/cocos/base/CCEventListenerKeyboard.cpp
            cocos2d/cocos/base/CCEventListenerMouse.cpp
            cocos2d/cocos/base/CCEventListenerTouch.cpp
            cocos2d/cocos/base/CCEventMouse.cpp
            cocos2d/cocos/base/CCEventTouch.cpp
            cocos2d/cocos/base/CCIMEDispatcher.cpp
            cocos2d/cocos/base/CCNS.cpp
            cocos2d/cocos/base/CCProfiling.cpp
            cocos2d/cocos/base/CCProperties.cpp
            cocos2d/cocos/base/CCRef.cpp
            cocos2d/cocos/base/CCScheduler.cpp
            cocos2d/cocos/base/CCScriptSupport.cpp
            cocos2d/cocos/base/CCTouch.cpp
            cocos2d/cocos/base/CCUserDefault-android.cpp
            cocos2d/cocos/base/CCUserDefault.cpp
            cocos2d/cocos/base/CCValue.cpp
            cocos2d/cocos/base/ObjectFactory.cpp
            cocos2d/cocos/base/TGAlib.cpp
            cocos2d/cocos/base/ZipUtils.cpp
            cocos2d/cocos/base/allocator/CCAllocatorDiagnostics.cpp
            cocos2d/cocos/base/allocator/CCAllocatorGlobal.cpp
            cocos2d/cocos/base/allocator/CCAllocatorGlobalNewDelete.cpp
            cocos2d/cocos/base/atitc.cpp
            cocos2d/cocos/base/base64.cpp
            cocos2d/cocos/base/ccCArray.cpp
            cocos2d/cocos/base/ccFPSImages.c
            cocos2d/cocos/base/ccRandom.cpp
            cocos2d/cocos/base/ccTypes.cpp
            cocos2d/cocos/base/ccUTF8.cpp
            cocos2d/cocos/base/ccUtils.cpp
            cocos2d/cocos/base/etc1.cpp
            cocos2d/cocos/base/pvr.cpp
            cocos2d/cocos/base/s3tc.cpp
            cocos2d/cocos/renderer/CCBatchCommand.cpp
            cocos2d/cocos/renderer/CCCustomCommand.cpp
            cocos2d/cocos/renderer/CCGLProgram.cpp
            cocos2d/cocos/renderer/CCGLProgramCache.cpp
            cocos2d/cocos/renderer/CCGLProgramState.cpp
            cocos2d/cocos/renderer/CCGLProgramStateCache.cpp
            cocos2d/cocos/renderer/CCGroupCommand.cpp
            cocos2d/cocos/renderer/CCMaterial.cpp
            cocos2d/cocos/renderer/CCMeshCommand.cpp
            cocos2d/cocos/renderer/CCPass.cpp
            cocos2d/cocos/renderer/CCPrimitive.cpp
            cocos2d/cocos/renderer/CCPrimitiveCommand.cpp
            cocos2d/cocos/renderer/CCQuadCommand.cpp
            cocos2d/cocos/renderer/CCRenderCommand.cpp
            cocos2d/cocos/renderer/CCRenderState.cpp
            cocos2d/cocos/renderer/CCRenderer.cpp
            cocos2d/cocos/renderer/CCTechnique.cpp
            cocos2d/cocos/renderer/CCTexture2D.cpp
            cocos2d/cocos/renderer/CCTextureAtlas.cpp
            cocos2d/cocos/renderer/CCTextureCache.cpp
            cocos2d/cocos/renderer/CCTextureCube.cpp
            cocos2d/cocos/renderer/CCTrianglesCommand.cpp
            cocos2d/cocos/renderer/CCVertexAttribBinding.cpp
            cocos2d/cocos/renderer/CCVertexIndexBuffer.cpp
            cocos2d/cocos/renderer/CCVertexIndexData.cpp
            cocos2d/cocos/renderer/ccGLStateCache.cpp
            cocos2d/cocos/renderer/CCFrameBuffer.cpp
            cocos2d/cocos/renderer/ccShaders.cpp
            cocos2d/cocos/vr/CCVRDistortion.cpp
            cocos2d/cocos/vr/CCVRDistortionMesh.cpp
            cocos2d/cocos/vr/CCVRGenericRenderer.cpp
            cocos2d/cocos/vr/CCVRGenericHeadTracker.cpp
            cocos2d/cocos/deprecated/CCArray.cpp
            cocos2d/cocos/deprecated/CCDeprecated.cpp
            cocos2d/cocos/deprecated/CCDictionary.cpp
            cocos2d/cocos/deprecated/CCNotificationCenter.cpp
            cocos2d/cocos/deprecated/CCSet.cpp
            cocos2d/cocos/deprecated/CCString.cpp
            cocos2d/cocos/physics/CCPhysicsBody.cpp
            cocos2d/cocos/physics/CCPhysicsContact.cpp
            cocos2d/cocos/physics/CCPhysicsJoint.cpp
            cocos2d/cocos/physics/CCPhysicsShape.cpp
            cocos2d/cocos/physics/CCPhysicsWorld.cpp
            cocos2d/cocos/physics3d/CCPhysics3D.cpp
            cocos2d/cocos/physics3d/CCPhysics3DWorld.cpp
            cocos2d/cocos/physics3d/CCPhysics3DComponent.cpp
            cocos2d/cocos/physics3d/CCPhysics3DDebugDrawer.cpp
            cocos2d/cocos/physics3d/CCPhysics3DObject.cpp
            cocos2d/cocos/physics3d/CCPhysics3DShape.cpp
            cocos2d/cocos/physics3d/CCPhysicsSprite3D.cpp
            cocos2d/cocos/physics3d/CCPhysics3DConstraint.cpp
            cocos2d/cocos/navmesh/CCNavMesh.cpp
            cocos2d/cocos/navmesh/CCNavMeshAgent.cpp
            cocos2d/cocos/navmesh/CCNavMeshDebugDraw.cpp
            cocos2d/cocos/navmesh/CCNavMeshObstacle.cpp
            cocos2d/cocos/navmesh/CCNavMeshUtils.cpp
            cocos2d/external/ConvertUTF/ConvertUTFWrapper.cpp
            cocos2d/external/ConvertUTF/ConvertUTF.c
            cocos2d/external/md5/md5.c
            cocos2d/external/tinyxml2/tinyxml2.cpp
            cocos2d/external/unzip/ioapi_mem.cpp
            cocos2d/external/unzip/ioapi.cpp
            cocos2d/external/unzip/unzip.cpp
            cocos2d/external/edtaa3func/edtaa3func.cpp
            cocos2d/external/xxhash/xxhash.c
            cocos2d/external/poly2tri/common/shapes.cc
            cocos2d/external/poly2tri/sweep/advancing_front.cc
            cocos2d/external/poly2tri/sweep/cdt.cc
            cocos2d/external/poly2tri/sweep/sweep_context.cc
            cocos2d/external/poly2tri/sweep/sweep.cc
            cocos2d/external/clipper/clipper.cpp
            cocos2d/cocos/platform/android/CCApplication-android.cpp
            cocos2d/cocos/platform/android/CCCommon-android.cpp
            cocos2d/cocos/platform/android/CCDevice-android.cpp
            cocos2d/cocos/platform/android/CCGLViewImpl-android.cpp
            cocos2d/cocos/platform/android/CCFileUtils-android.cpp
            cocos2d/cocos/platform/android/javaactivity-android.cpp
            cocos2d/cocos/platform/android/CCEnhanceAPI-android.cpp
            cocos2d/cocos/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxAccelerometer.cpp
            cocos2d/cocos/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxBitmap.cpp
            cocos2d/cocos/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxHelper.cpp
            cocos2d/cocos/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxRenderer.cpp
            cocos2d/cocos/platform/android/jni/Java_org_cocos2dx_lib_Cocos2dxEngineDataManager.cpp
            cocos2d/cocos/platform/android/jni/JniHelper.cpp
            cocos2d/cocos/platform/android/jni/TouchesJni.cpp
         )

target_include_directories(cocos2dx_static PRIVATE
                          ${CMAKE_CURRENT_SOURCE_DIR}/libcocos2dx/src/main/cpp
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/cocos/platform
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/cocos/platform/android/jni
                          ${CMAKE_CURRENT_SOURCE_DIR}/
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/cocos/
                          ${CMAKE_CURRENT_SOURCE_DIR}/
                          ${CMAKE_CURRENT_SOURCE_DIR}/base
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/tinyxml2
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/unzip
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/ConvertUTF
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/xxhash
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/include
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/include/bullet
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/freetype2/include/android/freetype2
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/edtaa3func
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/chipmunk/include
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/png/include/android
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/tiff/include/android
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/jpeg/include/android
                          ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/webp/include/android
                          ${ANDROID_NDK}/sources/third_party/shaderc/include)

#////////////////////

add_library(chipmunk_lib STATIC IMPORTED)
set_target_properties(chipmunk_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/chipmunk/prebuilt/android/armeabi-v7a/libchipmunk.a)

add_library(jpeg_lib STATIC IMPORTED)
set_target_properties(jpeg_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/jpeg/prebuilt/android/${ANDROID_ABI}/libjpeg.a)


add_library(png_lib STATIC IMPORTED)
set_target_properties(png_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/png/prebuilt/android/${ANDROID_ABI}/libpng.a)

add_library(bulletCollision_lib STATIC IMPORTED)
set_target_properties(bulletCollision_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/prebuilt/android/${ANDROID_ABI}/libBulletCollision.a)

add_library(bulletDynamics_lib STATIC IMPORTED)
set_target_properties(bulletDynamics_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/prebuilt/android/${ANDROID_ABI}/libBulletDynamics.a)

add_library(bulletMultiThreaded_lib STATIC IMPORTED)
set_target_properties(bulletMultiThreaded_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/prebuilt/android/${ANDROID_ABI}/libBulletMultiThreaded.a)

add_library(linearMath_lib STATIC IMPORTED)
set_target_properties(linearMath_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/prebuilt/android/${ANDROID_ABI}/libLinearMath.a)

add_library(miniCL_lib STATIC IMPORTED)
set_target_properties(miniCL_lib PROPERTIES IMPORTED_LOCATION
                      ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/external/bullet/prebuilt/android/${ANDROID_ABI}/libMiniCL.a)



 add_library(MyGame SHARED
            libcocos2dx/src/main/cpp/main.cpp
            Classes/AppDelegate.cpp
            Classes/HaowanLibScene.cpp
            Classes/Caretaker.cpp
            Classes/VisibleRect.cpp
            )

 target_include_directories(MyGame PRIVATE
                           ${CMAKE_CURRENT_SOURCE_DIR}
                           ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/cocos/platform/android/jni
                           ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/cocos/
                           ${CMAKE_CURRENT_SOURCE_DIR}/Classes
                           ${CMAKE_CURRENT_SOURCE_DIR}/libcocos2dx/src/main/cpp
                           ${CMAKE_CURRENT_SOURCE_DIR}/cocos2d/cocos/audio/include
                           ${ANDROID_NDK}/sources/third_party/shaderc/include)


target_link_libraries(MyGame
                      android
                      log
                      GLESv2
                      bulletCollision_lib
                      bulletDynamics_lib
                      bulletMultiThreaded_lib
                      linearMath_lib
                      miniCL_lib
                      chipmunk_lib
                      jpeg_lib
                      png_lib
                      z
                      atomic
                      cocos2dx_static)
