import os  

def delete_exe_files(directory):  
    # 确保目录存在  
    if not os.path.exists(directory):  
        print("指定的目录不存在。")  
        input()
        return  

    # 遍历目录中的所有文件  
    for filename in os.listdir(directory):  
        # 检查文件是否以 .exe 结尾  
        if filename.endswith('.exe'): 
            file_path = os.path.join(directory, filename)  
            try:  
                os.remove(file_path)  # 删除文件  
                print(f"已删除: {file_path}")  

            except Exception as e:  
                print(f"删除文件 {file_path} 时出错: {e}")
    input("")
if __name__ == "__main__":  

    target_directory = r"F:\c_learning"
    delete_exe_files(target_directory)