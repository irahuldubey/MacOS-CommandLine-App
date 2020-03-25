//
//  TWFileManager.h
//  TwitchChallenge
//
//  Created by DUBEY, RAHUL on 3/24/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TWFileManager : NSObject

// Initialize Method
- (instancetype)initWithPath:(NSString *)path;

// Method / Functions
- (BOOL)isValidPathName;

@property (strong, nonatomic) NSString *pathName;

@end

NS_ASSUME_NONNULL_END