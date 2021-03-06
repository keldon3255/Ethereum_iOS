//
//  SPContractEncoder.h
//  EthereumDemo
//
//  Created by 李江浩 on 2017/7/31.
//  Copyright © 2017年 NewDrivers. All rights reserved.
//

#import <Foundation/Foundation.h>
/** 对合约方法进行编码 */
@interface SPContractEncoder : NSObject
/**
 对方法原型进行编码

 @param function 方法原型，没有空格
 @return hash后的前4个字节
 */
- (NSString *)encodeFunction:(NSString *)function;
/**
 对int256参数进行编码
 
 @param value int256的值
 @param result 当前静态编码部分
 @return 字符串的形式返回静态编码结果
 */
- (NSString *)encodeInt256:(int)value resultString:(NSString *)result;
/**
 对bool进行编码
 
 @param boolValue bool值
 @param result 当前静态编码部分
 @return 字符串的形式返回静态编码结果
 */
- (NSString *)encodeBool:(NSString *)boolValue resultString:(NSString *)result;
/**
 动态参数的偏移量
 
 @param result 当前静态编码部分
 @param dynamicString 当前动态编码部分
 @param count 函数参数的总数
 @return 字符串的形式返回静态编码结果
 */
- (NSString *)encodeOffsetWithStaticString:(NSString *)result dynamicString:(NSString *)dynamicString argsCount:(NSInteger)count;
/**
 对string进行编码 长度+内容
 
 @param stringValue c类型字符串的长度
 @param dynamicString 当前动态编码部分
 @return 字符串形式返回动态编码结果
 */
- (NSString *)encodeString:(NSString *)stringValue dynamicString:(NSString *)dynamicString;
/**
 对array进行编码 长度+按顺序内容
 
 @param array 数组
 @param dynamicString 当前动态编码部分
 @return 字符串形式返回动态编码结果
 */
- (NSString *)encodeArray:(NSArray <NSString *>*)array dynamicString:(NSString *)dynamicString;
@end
