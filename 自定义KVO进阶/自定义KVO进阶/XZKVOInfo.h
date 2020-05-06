//
//  XZKVOInfo.h
//  XZCustomKVO
//
//  Created by Alan on 4/29/20.
//  Copyright © 2020 zhaixingzhi. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_OPTIONS(NSUInteger, XZKeyValueObservingOptions) {

    XZKeyValueObservingOptionNew = 0x01,
    XZKeyValueObservingOptionOld = 0x02,
};
@interface XZKVOInfo : NSObject
//观察者
@property (nonatomic, weak) NSObject  *observer;
//观察键值
@property (nonatomic, copy) NSString    *keyPath;
//需要观察的状态值
@property (nonatomic, assign) XZKeyValueObservingOptions options;
- (instancetype)initWitObserver:(NSObject *)observer forKeyPath:(NSString *)keyPath options:(XZKeyValueObservingOptions)options;

@end

NS_ASSUME_NONNULL_END
