/**
 * Ti.Keyframes
 * Copyright (c) 2016 by Hans Knöchel, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */
#import "TiViewProxy.h"
#import "KFVector.h"
#import "KFVectorLayer.h"

/**
 @discussion The main class to execute operation on the vector layer.
 */
@interface TiKeyframesVectorViewProxy : TiViewProxy {
    KFVectorLayer *sampleVectorLayer;
}

/**
 @discussion Initializes the frame of the vector layer. We may want to
 move this to the internal layout helper later, so we don't need a manual
 method for it.
 
 @param unused An unused parameter for the API-generation.
 @since 1.0.0
 */
- (void)initialize:(id)unused;

/**
 @discussion Starts the animation of the current vector object.
 
 @param unused An unused parameter for the API-generation.
 @since 1.0.0
 */
- (void)startAnimation:(id)unused;

/**
 @discussion Pauses the animation of the current vector object.
 
 @param unused An unused parameter for the API-generation.
 @since 1.0.0
 */
- (void)pauseAnimation:(id)unused;

/**
 @discussion Resumes the animation of the current vector object.
 
 @param unused An unused parameter for the API-generation.
 @since 1.0.0
 */
- (void)resumeAnimation:(id)unused;

/**
 @discussion Seeks the animation of the current vector object to a
 certain point (0.0 - 1.0).
 
 @param value The value to seek the progress to.
 @since 1.0.0
 */
- (void)seekToProgress:(id)value;

@end
