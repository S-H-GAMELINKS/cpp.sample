// Boost FilePath Get
#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <boost/filesystem.hpp>
#include <boost/range/iterator_range.hpp>

namespace fs = boost::filesystem;

namespace {

	//各素材ファイルパス取得
	std::vector<std::string> AllFilePath(const std::string& Path) {

		std::vector<std::string> Container;

		const fs::path path(Path);

		for (const auto& p : boost::make_iterator_range(fs::recursive_directory_iterator(path), {})) {
			if (fs::is_directory(p.path())) {
				std::string File = Path + "/" + p.path().filename().string();
				Container.emplace_back(std::move(File));
			}
		}

		return Container;
	}
    
    	//各素材ファイルパス取得
	std::vector<std::string> FilePath(const std::string& Path) {
        
        std::vector<std::string> Container;

		const fs::path path(Path);

		for (const auto& p : boost::make_iterator_range(fs::recursive_directory_iterator(path), {})) {
			if (!fs::is_directory(p.path())) {
				std::string File = Path + "/" + p.path().filename().string();
				Container.emplace_back(std::move(File));
			}
		}
        return Container;
	}
}

int main(){
    
    auto var = AllFilePath("test");
    
    std::vector<std::vector<std::string>> Anim;
    
    for (auto&& v : var){
        Anim.emplace_back(std::move(FilePath(v)));
    }
    
    std::sort(Anim.begin(),Anim.end());
    
    for (auto&& a : Anim){
        for(auto&& c : a)
            std::cout << c << std::endl;
    }
    
    return 0;   
}